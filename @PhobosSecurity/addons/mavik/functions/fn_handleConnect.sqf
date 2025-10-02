/*
 * fn_handleConnect.sqf
 * Checks the connection status and zoom status of the UAV.
 * and controls blur effects and communication loss due to distance.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call mavic_fnc_handleConnect;
 *
 * Public: No
 */
[] spawn {
	while {true} do {
		private _player = missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player];
		if (mavic_setting_enableConnectionDistance) then {
			private _uavs = allUnitsUAV select {typeOf _x isKindOf "Mavic_drone_base_F"};
			private _uavsNear = _player nearEntities ["Mavic_drone_base_F", mavic_setting_maxConnectionDistance];
			
			{
				_player disableUAVConnectability [_x, true];
			} forEach (_uavs - _uavsNear);
			{
				private _signal = [_player, _x] call Mavic_fnc_getSignal;
				if (_signal < 0.05) then {
					_player disableUAVConnectability [_x, true];
					_x enableUAVWaypoints false;
				};
				if (_signal > 0.1) then {
					_player enableUAVConnectability [_x, true];
					_x enableUAVWaypoints true;
				};
			} forEach _uavsNear;
		};

		private _uav = getConnectedUAV _player;
		private _ehId = nil;
		if ((typeOf _uav isKindOf "Mavic_drone_base_F") && (typeOf cameraOn isKindOf "Mavic_drone_base_F") && cameraView == "GUNNER") then {
			if !(mavic_setting_vanillaInterface) then {
				if (mavic_setting_showInterface) then {
					("mavic_rscLayer_interface" call BIS_fnc_rscLayer) cutRsc ["Mavic_Interface", "PLAIN"];
					_ehId = addMissionEventHandler ["Draw3D", { call Mavic_fnc_drawHud }];
				};
				missionNamespace setVariable ["mavic_var_prevHud", shownHUD];
				showHUD [true, false];
			};
			
			waitUntil {
				_CurrentUAV = getConnectedUAV _player;
				(_CurrentUAV != _uav) || !(typeOf _CurrentUAV isKindOf "Mavic_drone_base_F") || !(typeOf cameraOn isKindOf "Mavic_drone_base_F") || cameraView != "GUNNER" || !alive _CurrentUAV
			};
			if !(isNil "_ehId") then {removeMissionEventHandler ["Draw3D", _ehId]};
			call Mavic_fnc_onExit;
		};

		sleep 0.1;
	};
};

[] spawn {
	private _signalDropTime = -1;
	
	while {true} do {
		private _player = missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player];
		private _uav = getConnectedUAV _player;
		if (mavic_setting_enableConnectionDistance) then {
			if (typeOf _uav isKindOf "Mavic_drone_base_F") then {
				if !(isNil "mavic_ppEffect_signalBlur") then {
					mavic_ppEffect_signalBlur ppEffectEnable false;
				};
				
				private _uavSignal = [_player, _uav] call Mavic_fnc_getSignal;
				if (_uavSignal < 0.05) then {
					if (_signalDropTime == -1) then {
						_signalDropTime = time;
					} else {
						if ((typeOf cameraOn isKindOf "Mavic_drone_base_F") && cameraView == "GUNNER") then {
							mavic_ppEffect_signalBlur ppEffectEnable true;
							mavic_ppEffect_signalBlur ppEffectAdjust [0.8];
							mavic_ppEffect_signalBlur ppEffectCommit 0;
						} else {
							mavic_ppEffect_signalBlur ppEffectEnable false;
							mavic_ppEffect_signalBlur ppEffectCommit 0;
						};

						private _currentTime = (time - _signalDropTime);

						switch (true) do {
							case ((_currentTime > 5) and (_currentTime <= 10)): {
								private _gradient = uiNamespace getVariable ["mavic_ctrl_Gradient", controlNull];
								if (ctrlShown _gradient) exitWith {};
								_gradient ctrlShow true;
							};
							case (_currentTime > 15): {
								_player connectTerminalToUAV objNull;
								_uavGroup = group _uav;
								{ deleteWaypoint _x } forEachReversed waypoints _uavGroup;
								_uav move getPosATL _player;
								_uav flyInHeight 100;
								_player disableUAVConnectability [_uav, true];
								_signalDropTime = -1;
							};
							default {};
						};
					};
				} else {
					_signalDropTime = -1;
					private _gradient = uiNamespace getVariable ["mavic_ctrl_Gradient", controlNull];
					if !(ctrlShown _gradient) exitWith {};
					_gradient ctrlShow false;
				};
			};
		} else {
			if !(isNil "mavic_ppEffect_signalBlur") then {
				mavic_ppEffect_signalBlur ppEffectEnable false;
				mavic_ppEffect_signalBlur ppEffectCommit 0;
			};
			private _gradient = uiNamespace getVariable ["mavic_ctrl_Gradient", controlNull];
			if !(ctrlShown _gradient) exitWith {};
			_gradient ctrlShow false;
			_signalDropTime = -1;
			waitUntil {sleep 1; mavic_setting_enableConnectionDistance};
		};
		sleep 0.1;
	};
};
