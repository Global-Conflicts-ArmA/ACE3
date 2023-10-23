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
if (EGVAR(armor_overwride,enableArmorOverwrites) &&
{
	{
		private _armorOverwriteSides = [];
		if (EGVAR(armor_overwride,armorOverwriteBlufor)) then {
			_armorOverwriteSides pushBack blufor;
		};
		if (EGVAR(armor_overwride,armorOverwriteOpfor)) then {
			_armorOverwriteSides pushBack opfor;
		};
		if (EGVAR(armor_overwride,armorOverwriteIndependent)) then {
			_armorOverwriteSides pushBack independent;
		};
		if (EGVAR(armor_overwride,armorOverwriteCivilian)) then {
			_armorOverwriteSides pushBack civilian;
		};
		side _unit in _armorOverwriteSides
	} &&
	{
		_unit getVariable [QEGVAR(armor_overwride,armorOverwriteMode), 2] isNotEqualTo 2
	}
}||
{
	_unit getVariable [QEGVAR(armor_overwride,armorOverwriteMode), 2] isEqualTo 1
}) then {
	switch (true) do
	{
		case (_hitpoint == "hithead"): {
			private _armorOverwriteHeadEnabled = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteHeadEnabled), EGVAR(armor_overwride,armorOverwriteHeadEnabled)];

			if (_armorOverwriteHeadEnabled) then {
				_armor = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteHeadValue), EGVAR(armor_overwride,armorOverwriteHeadValue)];
			};
		};
		case (_hitpoint == "hitface"): {
			private _armorOverwriteFaceEnabled = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteFaceEnabled), EGVAR(armor_overwride,armorOverwriteFaceEnabled)];

			if (_armorOverwriteFaceEnabled) then {
				_armor = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteFaceValue), EGVAR(armor_overwride,armorOverwriteFaceValue)];
			};
		};
		case (_hitpoint == "hitneck"): {
			private _armorOverwriteNeckEnabled = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteNeckEnabled), EGVAR(armor_overwride,armorOverwriteNeckEnabled)];

			if (_armorOverwriteNeckEnabled) then {
				_armor = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteNeckValue), EGVAR(armor_overwride,armorOverwriteNeckValue)];
			};
		};
		case (_hitpoint == "hitchest"): {
			private _armorOverwriteChestEnabled = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteChestEnabled), EGVAR(armor_overwride,armorOverwriteChestEnabled)];

			if (_armorOverwriteChestEnabled) then {
				_armor = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteChestValue), EGVAR(armor_overwride,armorOverwriteChestValue)];
			};
		};
		case (_hitpoint == "hitdiaphragm"): {
			private _armorOverwriteDiaphragmEnabled = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteDiaphragmEnabled), EGVAR(armor_overwride,armorOverwriteDiaphragmEnabled)];

			if (_armorOverwriteDiaphragmEnabled) then {
				_armor = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteDiaphragmValue), EGVAR(armor_overwride,armorOverwriteDiaphragmValue)];
			};
		};
		case (_hitpoint == "hitabdomen"): {
			private _armorOverwriteAbdomenEnabled = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteAbdomenEnabled), EGVAR(armor_overwride,armorOverwriteAbdomenEnabled)];

			if (_armorOverwriteAbdomenEnabled) then {
				_armor = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteAbdomenValue), EGVAR(armor_overwride,armorOverwriteAbdomenValue)];
			};
		};
		case (_hitpoint == "hitpelvis"): {
			private _armorOverwritePelvisEnabled = _unit getVariable [QEGVAR(armor_overwride,armorOverwritePelvisEnabled), EGVAR(armor_overwride,armorOverwritePelvisEnabled)];

			if (_armorOverwriteAbdomenEnabled) then {
				_armor = _unit getVariable [QEGVAR(armor_overwride,armorOverwritePelvisValue), EGVAR(armor_overwride,armorOverwritePelvisValue)];
			};
		};
		case (_hitpoint in ["hitarms", "hitleftarm", "hitrightarm"]): {
			private _armorOverwriteArmsEnabled = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteArmsEnabled), EGVAR(armor_overwride,armorOverwriteArmsEnabled)];

			if (_armorOverwriteArmsEnabled) then {
				_armor = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteArmsValue), EGVAR(armor_overwride,armorOverwriteArmsValue)];
			};
		};
		case (_hitpoint == "hithands"): {
			private _armorOverwriteHandsEnabled = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteHandsEnabled), EGVAR(armor_overwride,armorOverwriteHandsEnabled)];

			if (_armorOverwriteHandsEnabled) then {
				_armor = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteHandsValue), EGVAR(armor_overwride,armorOverwriteHandsValue)];
			};
		};
		case (_hitpoint in ["hitlegs", "hitleftleg", "hitrightleg"]): {
			private _armorOverwriteLegsEnabled = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteLegsEnabled), EGVAR(armor_overwride,armorOverarmorOverwriteLegsEnabledwriteHandsEnabled)];

			if (_armorOverwriteLegsEnabled) then {
				_armor = _unit getVariable [QEGVAR(armor_overwride,armorOverwriteLegsValue), EGVAR(armor_overwride,armorOverwriteLegsValue)];
			};
		};
		default {};
	};
};

_armor // return