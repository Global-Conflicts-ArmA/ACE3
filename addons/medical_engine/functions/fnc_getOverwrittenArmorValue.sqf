#include "..\script_component.hpp"
/*
	 * Author: W-Cephei
	 * Finds if the team or unit has an armor value overwrite for a given hitpart. 
	 *
	 * Arguments:
	 * 0: Unit <STRING>
	 * 1: Hitpoint <STRING>
	 *
	 * Return Value:
	 * The new armor value or nil <NUMBER>
	 *
	 * Example:
	 * [unit, "HitChest"] call ace_medical_engine_fnc_getOverwrittenArmorValue
	 *
	 * Public: No
 */

params ["_unit", "_hitpoint"];

// check if the overwrites are enabled
// check if the unit is set to use regardless of the side setttings
// check if the unit is in the side array
private _armor = nil;
if (EGVAR(medical, enableArmorOverwrites) &&
{
	{
		private _armorOverwriteSides = [];
		if (EGVAR(medical, armorOverwriteBlufor)) then {
			_armorOverwriteSides pushBack blufor;
		};
		if (EGVAR(medical, armorOverwriteOpfor)) then {
			_armorOverwriteSides pushBack opfor;
		};
		if (EGVAR(medical, armorOverwriteIndependent)) then {
			_armorOverwriteSides pushBack independent;
		};
		if (EGVAR(medical, armorOverwriteCivilian)) then {
			_armorOverwriteSides pushBack civilian;
		};
		side _unit in _armorOverwriteSides
	} &&
	{
		_unit getVariable [QGVAR(armorOverwriteMode), 2] isNotEqualTo 2
	}
}||
{
	_unit getVariable [QGVAR(armorOverwriteMode), 2] isEqualTo 1
}) then {
	switch (true) do
	{
		case (_hitpoint == "hithead"): {
			private _armorOverwriteHeadEnabled = _unit getVariable [QGVAR(armorOverwriteHeadEnabled), QEGVAR(armorOverwriteHeadEnabled)];

			if (_armorOverwriteHeadEnabled) then {
				_armor = _unit getVariable [QGVAR(armorOverwriteHeadValue), QEGVAR(armorOverwriteHeadValue)];
			};
		};
		case (_hitpoint == "hitface"): {
			private _armorOverwriteFaceEnabled = _unit getVariable [QGVAR(armorOverwriteFaceEnabled), QEGVAR(armorOverwriteFaceEnabled)];

			if (_armorOverwriteFaceEnabled) then {
				_armor = _unit getVariable [QGVAR(armorOverwriteFaceValue), QEGVAR(armorOverwriteFaceValue)];
			};
		};
		case (_hitpoint == "hitneck"): {
			private _armorOverwriteNeckEnabled = _unit getVariable [QGVAR(armorOverwriteNeckEnabled), QEGVAR(armorOverwriteNeckEnabled)];

			if (_armorOverwriteNeckEnabled) then {
				_armor = _unit getVariable [QGVAR(armorOverwriteNeckValue), QEGVAR(armorOverwriteNeckValue)];
			};
		};
		case (_hitpoint == "hitchest"): {
			private _armorOverwriteChestEnabled = _unit getVariable [QGVAR(armorOverwriteChestEnabled), QEGVAR(armorOverwriteChestEnabled)];

			if (_armorOverwriteChestEnabled) then {
				_armor = _unit getVariable [QGVAR(armorOverwriteChestValue), QEGVAR(armorOverwriteChestValue)];
			};
		};
		case (_hitpoint == "hitdiaphragm"): {
			private _armorOverwriteDiaphragmEnabled = _unit getVariable [QGVAR(armorOverwriteDiaphragmEnabled), QEGVAR(armorOverwriteDiaphragmEnabled)];

			if (_armorOverwriteDiaphragmEnabled) then {
				_armor = _unit getVariable [QGVAR(armorOverwriteDiaphragmValue), QEGVAR(armorOverwriteDiaphragmValue)];
			};
		};
		case (_hitpoint == "hitabdomen"): {
			private _armorOverwriteAbdomenEnabled = _unit getVariable [QGVAR(armorOverwriteAbdomenEnabled), QEGVAR(armorOverwriteAbdomenEnabled)];

			if (_armorOverwriteAbdomenEnabled) then {
				_armor = _unit getVariable [QGVAR(armorOverwriteAbdomenValue), QEGVAR(armorOverwriteAbdomenValue)];
			};
		};
		case (_hitpoint == "hitpelvis"): {
			private _armorOverwritePelvisEnabled = _unit getVariable [QGVAR(armorOverwritePelvisEnabled), QEGVAR(armorOverwritePelvisEnabled)];

			if (_armorOverwriteAbdomenEnabled) then {
				_armor = _unit getVariable [QGVAR(armorOverwritePelvisValue), QEGVAR(armorOverwritePelvisValue)];
			};
		};
		case (_hitpoint in ["hitarms", "hitleftarm", "hitrightarm"]): {
			private _armorOverwriteArmsEnabled = _unit getVariable [QGVAR(armorOverwriteArmsEnabled), QEGVAR(armorOverwriteArmsEnabled)];

			if (_armorOverwriteArmsEnabled) then {
				_armor = _unit getVariable [QGVAR(armorOverwriteArmsValue), QEGVAR(armorOverwriteArmsValue)];
			};
		};
		case (_hitpoint == "hithands"): {
			private _armorOverwriteHandsEnabled = _unit getVariable [QGVAR(armorOverwriteHandsEnabled), QEGVAR(armorOverwriteHandsEnabled)];

			if (_armorOverwriteHandsEnabled) then {
				_armor = _unit getVariable [QGVAR(armorOverwriteHandsValue), QEGVAR(armorOverwriteHandsValue)];
			};
		};
		case (_hitpoint in ["hitlegs", "hitleftleg", "hitrightleg"]): {
			private _armorOverwriteLegsEnabled = _unit getVariable [QGVAR(armorOverwriteLegsEnabled), QEGVAR(armorOverarmorOverwriteLegsEnabledwriteHandsEnabled)];

			if (_armorOverwriteLegsEnabled) then {
				_armor = _unit getVariable [QGVAR(armorOverwriteLegsValue), QEGVAR(armorOverwriteLegsValue)];
			};
		};
		default {};
	};
    
};

_armor // return