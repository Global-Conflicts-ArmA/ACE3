#include "..\script_component.hpp"
/*
 * Author: BaerMitUmlaut
 * Handles the blood volume effect.
 *
 * Arguments:
 * 0: Enable <BOOL>
 * 1: Intensity <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [false, 0.5] call ace_medical_feedback_fnc_effectBloodVolume
 *
 * Public: No
 */

params ["_enable", "_intensity"];

if (isNil QGVAR(ppBloodVolume)) exitWith {};
if ((!_enable) || {_intensity == 0}) exitWith {
    GVAR(ppBloodVolume) ppEffectEnable false;
};

GVAR(ppBloodVolume) ppEffectEnable true;
GVAR(ppBloodVolume) ppEffectAdjust [1, (1-_intensity), 0, [0, 0, 0, _intensity],  [(1+(_intensity*2)), 1, 1, (1 - _intensity)],  [4, -1.5, -1.5, 0]];
GVAR(ppBloodVolume) ppEffectCommit 1;
