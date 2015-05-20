private["_unit","_radioConfig","_radio"];

_unit = [_this, 0, player] call BIS_fnc_param;
_radioConfig = [_this, 1, ""] call BIS_fnc_param;

if (isNil "TFAR_currentUnit") then
{
	TFAR_currentUnit = player;
};
if (_radioConfig != "NONE") then
{
	TF_dd_frequency = "32.0";
	waitUntil {call TFAR_fnc_haveSWRadio};
	_radio = call TFAR_fnc_activeSwRadio;
	switch (_radioConfig) do
	{
		case "SL":
		{
			[_radio, 1, (group _unit) getVariable["CODI_Loadout_SW_FireTeam1", "100"]] call TFAR_fnc_setChannelFrequency;
			[_radio, 2, (group _unit) getVariable["CODI_Loadout_SW_FireTeam2", "100"]] call TFAR_fnc_setChannelFrequency;
			[_radio, 3, (group _unit) getVariable["CODI_Loadout_SW_FireTeam3", "100"]] call TFAR_fnc_setChannelFrequency;
			[_radio, 4, (group _unit) getVariable["CODI_Loadout_SW_FireTeam4", "100"]] call TFAR_fnc_setChannelFrequency;
			[_radio, 5, (group _unit) getVariable["CODI_Loadout_SW_FireTeam5", "100"]] call TFAR_fnc_setChannelFrequency;
			[_radio, 6, (group _unit) getVariable["CODI_Loadout_SW_FireTeam6", "100"]] call TFAR_fnc_setChannelFrequency;
			[_radio, 7, (group _unit) getVariable["CODI_Loadout_SW_Squad", "200"]] call TFAR_fnc_setChannelFrequency;
			[_radio, 8, missionNamespace getVariable["CODI_Loadout_SW_Emergency", "31"]] call TFAR_fnc_setChannelFrequency;
			[_radio, 2] call TFAR_fnc_setSwStereo;
			[_radio, 7] call TFAR_fnc_setAdditionalSwChannel;
			[_radio, 1] call TFAR_fnc_setAdditionalSwStereo;
			[_radio, 6] call TFAR_fnc_setSwChannel;
		};
		case "FTL":
		{
			[_radio, 1, (group _unit) getVariable["CODI_Loadout_SW_FireTeam", "100"]] call TFAR_fnc_setChannelFrequency;
			[_radio, 2, (group _unit) getVariable["CODI_Loadout_SW_Squad", "200"]] call TFAR_fnc_setChannelFrequency;
			[_radio, 3, missionNamespace getVariable["CODI_Loadout_SW_Emergency", "31"]] call TFAR_fnc_setChannelFrequency;
			[_radio, 4, format["%1.1",(group _unit) getVariable["CODI_Loadout_SW_FireTeam", "100"]]] call TFAR_fnc_setChannelFrequency;
			[_radio, 5, format["%1.2",(group _unit) getVariable["CODI_Loadout_SW_FireTeam", "100"]]] call TFAR_fnc_setChannelFrequency;
			[_radio, 6, format["%1.3",(group _unit) getVariable["CODI_Loadout_SW_FireTeam", "100"]]] call TFAR_fnc_setChannelFrequency;
			[_radio, 7, format["%1.4",(group _unit) getVariable["CODI_Loadout_SW_FireTeam", "100"]]] call TFAR_fnc_setChannelFrequency;
			[_radio, 8, format["%1.5",(group _unit) getVariable["CODI_Loadout_SW_FireTeam", "100"]]] call TFAR_fnc_setChannelFrequency;
			[_radio, 2] call TFAR_fnc_setSwStereo;
			[_radio, 1] call TFAR_fnc_setAdditionalSwChannel;
			[_radio, 1] call TFAR_fnc_setAdditionalSwStereo;
			[_radio, 0] call TFAR_fnc_setSwChannel;
		};
		default
		{
			[_radio, 1, (group _unit) getVariable["CODI_Loadout_SW_FireTeam", "100"]] call TFAR_fnc_setChannelFrequency;
			[_radio, 2, (group _unit) getVariable["CODI_Loadout_SW_Squad", "200"]] call TFAR_fnc_setChannelFrequency;
			[_radio, 3, missionNamespace getVariable["CODI_Loadout_SW_Emergency", "31"]] call TFAR_fnc_setChannelFrequency;
			[_radio, 4, format["%1.1",(group _unit) getVariable["CODI_Loadout_SW_FireTeam", "100"]]] call TFAR_fnc_setChannelFrequency;
			[_radio, 5, format["%1.2",(group _unit) getVariable["CODI_Loadout_SW_FireTeam", "100"]]] call TFAR_fnc_setChannelFrequency;
			[_radio, 6, format["%1.3",(group _unit) getVariable["CODI_Loadout_SW_FireTeam", "100"]]] call TFAR_fnc_setChannelFrequency;
			[_radio, 7, format["%1.4",(group _unit) getVariable["CODI_Loadout_SW_FireTeam", "100"]]] call TFAR_fnc_setChannelFrequency;
			[_radio, 8, format["%1.5",(group _unit) getVariable["CODI_Loadout_SW_FireTeam", "100"]]] call TFAR_fnc_setChannelFrequency;
			[_radio, 2] call TFAR_fnc_setSwStereo;
			[_radio, 2] call TFAR_fnc_setAdditionalSwChannel;
			[_radio, 1] call TFAR_fnc_setAdditionalSwStereo;
			[_radio, 0] call TFAR_fnc_setSwChannel;
		};
	};
};
if (_radioConfig == "PL" || _radioConfig == "SL" || _radioConfig == "FAC") then
{
	waitUntil {call TFAR_fnc_haveLRRadio};
	_radio = call TFAR_fnc_activeLrRadio;
	[_radio, 1, "51"] call TFAR_fnc_setChannelFrequency;
	[_radio, 2, "52"] call TFAR_fnc_setChannelFrequency;
	[_radio, 3, "53"] call TFAR_fnc_setChannelFrequency;
	[_radio, 4, "54"] call TFAR_fnc_setChannelFrequency;
	[_radio, 5, "55"] call TFAR_fnc_setChannelFrequency;
	[_radio, 6, "56"] call TFAR_fnc_setChannelFrequency;
	[_radio, 7, "57"] call TFAR_fnc_setChannelFrequency;
	[_radio, 8, "58"] call TFAR_fnc_setChannelFrequency;
	[_radio, 9, missionNamespace getVariable["CODI_Loadout_SW_Emergency", "31"]] call TFAR_fnc_setChannelFrequency;
	[_radio select 0, _radio select 1, 2] call TFAR_fnc_setLrStereo;
	[_radio select 0, _radio select 1, 1] call TFAR_fnc_setAdditionalLrStereo;
	if (_radioConfig == "FAC") then
	{
		[_radio select 0, _radio select 1, 2] call TFAR_fnc_setLrChannel;
	}
	else
	{
		[_radio select 0, _radio select 1, 0] call TFAR_fnc_setLrChannel;
	};
	[_radio select 0, _radio select 1, 8] call TFAR_fnc_setAdditionalLrChannel;
};