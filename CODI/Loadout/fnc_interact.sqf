//[player, 1] execVM "interact.sqf";
_unit = _this select 0;
_actionType = _this select 1;
_action = ["Test","Test","\a3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa",{hint "it works!";},{true}] call ace_interact_menu_fnc_createAction;
[_unit, _actionType, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;