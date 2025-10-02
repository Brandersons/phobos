/*
 * fn_createLight.sqf
 * Create light object and attach to Mavic.
 *
 * Arguments:
 * 0: UAV <OBJECT>
 *
 * Return Value:
 * Object (Light Object)
 *
 * Example:
 * [this] call mavic_fnc_createLight;
 *
 * Public: No
 */
params ["_uav"];

if !(isServer) exitWith {};

private _lightStatus = _uav getVariable ["mavic_var_lightStatus", [objNull, false]];
private _lightObj = _lightStatus #0;
private _lightOn = _lightStatus #1;

if (mavic_setting_lightAllowed) then {
	_lightObj = "Reflector_Cone_01_narrow_white_F" createVehicle [0,0,0];
	_lightObj hideObjectGlobal true;
	_lightObj allowDamage false;
	_lightObj setVectorDirandUp [[0,0,-1], [0,1,0]];
	_lightObj attachTo [_uav,[0,0,-0.05]];
	_lightObj setVectorDirandUp [[0,0,-1], [0,1,0]];
	[_lightObj, _uav] remoteExecCall ["disableCollisionWith", 0, _uav];
};

_uav setVariable ["mavic_var_lightStatus", [_lightObj, _lightOn], true];

_lightObj;