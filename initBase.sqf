mdh_nuke_destruction_zone	= 1000;
mdh_nuke_camshake		= 1;
mdh_nuke_ash			= 1;
mdh_nuke_colorcorrection	= 1;

enableEnvironment false;

CODI_fnc_teleport = compile preprocessFileLineNumbers "CODI\fn_teleport.sqf";
call compile preprocessFileLineNumbers "CODI\missionGenerator\init.sqf";
call compile preprocessFileLineNumbers "CODI\loadout\init.sqf";
call compile preprocessFileLineNumbers "CODI\heli\init.sqf";

va = false;
cs = false;
CODI_xAbleVirtualArsenal = {
	_bool = _this select 0;
	va = _bool;
};
CODI_xAbleClassSelection = {
	_bool = _this select 0;
	cs = _bool;
};

equip enableSimulation false;

if (hasInterface) then
{
	[player, "freizeit"] call CODI_Loadout_fnc_loadouts;
	['Preload'] call BIS_fnc_arsenal;
	equip addAction["Ausrüsten", {[player, player getVariable["CODI_Loadout_Class", typeof player], "flecktarn", str(side player), player getVariable["CODI_Loadout_ForceUnsilenced", false], player getVariable["CODI_Loadout_ForceSilenced", false], false] call CODI_Loadout_fnc_loadouts;}, nil, 6, true, true, "", "((getPos _target) distance (getPos _this)) <= 5"];
	equip addAction["Freizeit", {[player, "freizeit"] call CODI_Loadout_fnc_loadouts;}, nil, 6, true, true, "", "((getPos _target) distance (getPos _this)) <= 5"];
	equip addAction["Zusehen", {["forced"] spawn CSSA3_fnc_createSpectateDialog;}, nil, 6, true, true, "", "((getPos _target) distance (getPos _this)) <= 5"];
	equip addAction["Teleport", {[player] call CODI_fnc_teleport;}, nil, 6, true, true, "", "((getPos _target) distance (getPos _this)) <= 5"];
	//equip addAction["Struktur ansehen", {[missionconfigfile >> "CfgORBAT" >> "1stCATD"] call BIS_fnc_ORBATOpen;}, nil, 6, true, true, "", "((getPos _target) distance (getPos _this)) <= 5"];
	if (getPlayerUID player == "76561197961486247" || getPlayerUID player == "76561197996296785" || getPlayerUID player == "_SP_PLAYER_" || serverCommandAvailable "#kick") then
	{
		equip addAction["Virtual Arsenal", {["Open",true] spawn BIS_fnc_arsenal;}, nil, 6, true, true, "", "((getPos _target) distance (getPos _this)) <= 5"];
		equip addAction["Class Selector", {createdialog "CODI_Loadout_ClassSelector";}, nil, 6, true, true, "", "((getPos _target) distance (getPos _this)) <= 5"];
		equip addAction["Enable Virtual Arsenal", {[[true],"CODI_xAbleVirtualArsenal",true,true] call BIS_fnc_MP;}, nil, 6, true, true, "", "(((getPos _target) distance (getPos _this)) <= 5) && !va"];
		equip addAction["Disable Virtual Arsenal", {[[false],"CODI_xAbleVirtualArsenal",true,true] call BIS_fnc_MP;}, nil, 6, true, true, "", "(((getPos _target) distance (getPos _this)) <= 5) && va"];
		equip addAction["Enable Class Selection", {[[true],"CODI_xAbleClassSelection",true,true] call BIS_fnc_MP;}, nil, 6, true, true, "", "(((getPos _target) distance (getPos _this)) <= 5) && !cs"];
		equip addAction["Disable Class Selection", {[[false],"CODI_xAbleClassSelection",true,true] call BIS_fnc_MP;}, nil, 6, true, true, "", "(((getPos _target) distance (getPos _this)) <= 5) && cs"];
	}
	else
	{
		equip addAction["Virtual Arsenal", {["Open",true] spawn BIS_fnc_arsenal;}, nil, 6, true, true, "", "((getPos _target) distance (getPos _this)) <= 5 && va"];
		equip addAction["Class Selector", {createdialog "CODI_Loadout_ClassSelector";}, nil, 6, true, true, "", "((getPos _target) distance (getPos _this)) <= 5 && cs"];
	};
	player addRating 99999999;
	sdv1 addAction["Umziehen", {[player, "O_diver_F", "", str(side player), sdv1] call CODI_Loadout_fnc_umziehen;}, nil, 6, true, true, "", "alive _target && vehicle _this != _target"];
	sdv2 addAction["Umziehen", {[player, "O_diver_F", "", str(side player), sdv2] call CODI_Loadout_fnc_umziehen;}, nil, 6, true, true, "", "alive _target && vehicle _this != _target"];
	sdv3 addAction["Umziehen", {[player, "O_diver_F", "", str(side player), sdv3] call CODI_Loadout_fnc_umziehen;}, nil, 6, true, true, "", "alive _target && vehicle _this != _target"];
	sdv4 addAction["Umziehen", {[player, "O_diver_F", "", str(side player), sdv4] call CODI_Loadout_fnc_umziehen;}, nil, 6, true, true, "", "alive _target && vehicle _this != _target"];
	//gh1 addAction["Umziehen", {[player, "B_soldier_PG_F", "flecktarn", str(side player), gh1] call CODI_Loadout_fnc_umziehen;}, nil, 6, true, true, "", "alive _target && vehicle _this == _target"];
	//mh1 addAction["Roter Rauch", {[player, "SmokeShellRed", 2] call CODI_Heli_fnc_grenade;}, nil, 6, true, true, "", "_this == driver _target"];
	/*if (!isNil "pl") then
	{
		if (player == pl) then
		{
			[] call compile preprocessFileLineNumbers "pxs_satcom_a3\init_satellite.sqf";
			[] spawn
			{
				while {true} do
				{
					waitUntil{(getPos pl) distance (getMarkerPos "respawn_west") < 200};
					[pl, true] call PXS_switcher;
					waitUntil{(getPos pl) distance (getMarkerPos "respawn_west") > 200};
					[pl, false] call PXS_switcher;
				};
			};
		};
	};*/
	[player, 25, 3000, 1.4, 0.32, 0.68, 0.00] execVM "scripts\trindisplay\diverstats.sqf";
	player addMPEventHandler["MPRespawn", {player addRating 99999999;[_this select 0, "freizeit"] call CODI_Loadout_fnc_loadouts;[player, 25, 3000, 1.4, 0.32, 0.68, 0.00] execVM "scripts\trindisplay\diverstats.sqf";}];
	//[heliTraining] spawn CODI_Heli_fnc_training;
	//[heliTest, 300] spawn CODI_Heli_fnc_test;
};

{
	_veh = _x;
	{
		_radio = [_veh, _x];
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
		[_radio select 0, _radio select 1, 1] call TFAR_fnc_setLrChannel;
		[_radio select 0, _radio select 1, 8] call TFAR_fnc_setAdditionalLrChannel;
	} forEach ["gunner_radio_settings","driver_radio_settings","commander_radio_settings","turretUnit_0_radio_setting"];
}
forEach [sdv1,sdv2,sdv3,sdv4];

if (!isServer) exitWith{};

/*fnc_panochori = compile preprocessFileLineNumbers "missions\panochori.sqf";
fnc_agiosdionysios = compile preprocessFileLineNumbers "missions\agiosdionysios.sqf";
fnc_charkia = compile preprocessFileLineNumbers "missions\charkia.sqf";
fnc_galati = compile preprocessFileLineNumbers "missions\galati.sqf";
fnc_kore = compile preprocessFileLineNumbers "missions\kore.sqf";
fnc_rodopoli = compile preprocessFileLineNumbers "missions\rodopoli.sqf";
fnc_syrta = compile preprocessFileLineNumbers "missions\syrta.sqf";
fnc_zaros = compile preprocessFileLineNumbers "missions\zaros.sqf";
fnc_abdera = compile preprocessFileLineNumbers "missions\abdera.sqf";
fnc_abdera2 = compile preprocessFileLineNumbers "missions\abdera2.sqf";
fnc_pyrgos = compile preprocessFileLineNumbers "missions\pyrgos.sqf";
fnc_pyrgos2 = compile preprocessFileLineNumbers "missions\pyrgos2.sqf";
fnc_airfield_factory = compile preprocessFileLineNumbers "missions\airfield_factory.sqf";
fnc_anthrakia_factory = compile preprocessFileLineNumbers "missions\anthrakia_factory.sqf";
fnc_athira_factory = compile preprocessFileLineNumbers "missions\athira_factory.sqf";
fnc_charkia_factory = compile preprocessFileLineNumbers "missions\charkia_factory.sqf";
fnc_katalaki_factory = compile preprocessFileLineNumbers "missions\katalaki_factory.sqf";
fnc_kore_factory = compile preprocessFileLineNumbers "missions\kore_factory.sqf";
fnc_lakka_factory = compile preprocessFileLineNumbers "missions\lakka_factory.sqf";
fnc_pyrgos_factory = compile preprocessFileLineNumbers "missions\pyrgos_factory.sqf";
fnc_lakka_military = compile preprocessFileLineNumbers "missions\lakka_military.sqf";
fnc_telos_military = compile preprocessFileLineNumbers "missions\telos_military.sqf";
fnc_sofia_military = compile preprocessFileLineNumbers "missions\sofia_military.sqf";
fnc_paros_military = compile preprocessFileLineNumbers "missions\paros_military.sqf";
fnc_pyrgos_military = compile preprocessFileLineNumbers "missions\pyrgos_military.sqf";
fnc_patrol = compile preprocessFileLineNumbers "missions\patrol.sqf";
fnc_chalkeia = compile preprocessFileLineNumbers "missions\chalkeia.sqf";*/

{
	[_x] call CODI_Loadout_fnc_vehicleLoadouts;
}
forEach [sdv1,sdv2,sdv3,sdv4];
//san removeWeaponTurret["Laserdesignator_mounted",[0]];

/*[] spawn
{
	while {alive rearm} do
	{
		rearm setAmmoCargo 1;
		sleep (10*60);
	};
};
[] spawn
{
	while {alive repair} do
	{
		repair setRepairCargo 1;
		sleep (10*60);
	};
};
[] spawn
{
	while {alive refuel} do
	{
		refuel setFuelCargo 1;
		refuel setVariable ["AGM_amountFuelCargo", getNumber (configFile >> "CfgVehicles" >> typeOf refuel >> "AGM_fuelCapacityCargo"), true];
		sleep (10*60);
	};
};*/