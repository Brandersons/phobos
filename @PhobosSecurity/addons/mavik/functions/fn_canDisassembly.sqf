/*
 * fn_canDisassembly.sqf
 * Check the UAV is recoverable.
 *
 * Arguments:
 * 0: UAV <OBJECT>
 *
 * Return Value:
 * Boolean (can or not)
 *
 * Example:
 * [this] call mavic_fnc_canDisassembly;
 *
 * Public: No
 */
params ["_uav"];

alive _uav && player canAdd "Item_Mavic" && cameraOn == player && {((speed _uav) < 1) && {!(isEngineOn _uav)}}