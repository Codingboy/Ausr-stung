if (!isServer) exitWith {};
_veh = _this select 0;

_magazines = [];
_weapons = [];
_items = [];
_backpacks = [];
_thermal = true;
_removeWeapons = [];
_clear = false;

switch (typeof _veh) do
{
	case "Fennek_Flecktarn";
	case "Fennek_Tropen";
	case "Fennek_UN";
	case "Fennek_Winter";
	case "Fennek_Flecktarn_gmg";
	case "Fennek_Tropen_gmg";
	case "Fennek_Winter_gmg";
	case "Fennek_Flecktarn_mg";
	case "Fennek_Tropen_mg";
	case "Fennek_Winter_mg":
	{
		_clear = true;
		_thermal = false;
		if (isClass (configFile >> "CfgPatches" >> "AGM_Medical")) then
		{
			_items = [["AGM_Bloodbag",10],["AGM_Epipen", 10],["AGM_Morphine",20],["AGM_Bandage",100]];
		};
		_magazines = [["1Rnd_HE_Grenade_shell",30],["30Rnd_65x39_caseless_mag_Tracer",30],["20Rnd_762x51_Mag",5],["200Rnd_65x39_cased_Box_Tracer",5]];
	};
	case "Fennek_Flecktarn_san";
	case "Fennek_Tropen_san";
	case "Fennek_UN_san";
	case "Fennek_Winter_san":
	{
		_clear = true;
		_thermal = false;
		if (isClass (configFile >> "CfgPatches" >> "AGM_Medical")) then
		{
			_items = [["AGM_Bloodbag",10],["AGM_Epipen", 10],["AGM_Morphine",20],["AGM_Bandage",100]];
		};
		_removeWeapons = ["Laserdesignator_mounted"];
	};
	case "B_SDV_01_F":
	{
		_clear = true;
		_thermal = false;
	};
	case "BWA3_Puma_Tropen";
	case "BWA3_Puma_Fleck";
	case "B_Truck_01_transport_F";
	case "B_Truck_01_covered_F";
	case "B_Heli_Transport_01_F";
	case "B_Heli_Transport_03_F";
	case "B_Heli_Transport_03_unarmed_F";
	case "B_Heli_Transport_01_camo_F":
	{
		_clear = true;
		if (isClass (configFile >> "CfgPatches" >> "AGM_Medical")) then
		{
			_items = [["AGM_Bloodbag",20],["AGM_Epipen", 20],["AGM_Morphine",40],["AGM_Bandage",200]];
		};
		_magazines = [["1Rnd_HE_Grenade_shell",40],["30Rnd_65x39_caseless_mag_Tracer",60],["20Rnd_762x51_Mag",10],["200Rnd_65x39_cased_Box_Tracer",10],["Titan_AT",5],["Titan_AA",5],["SatchelCharge_Remote_Mag",2],["SLAMDirectionalMine_Wire_Mag",0],["DemoCharge_Remote_Mag",2]];
	};
	case "B_Heli_Attack_01_F":
	{
		_clear = true;
		_thermal = false;
	};
	case "I_Heli_light_03_F";
	case "B_Heli_Light_01_F";
	case "B_Heli_Light_01_armed_F":
	{
		_clear = true;
	};
	case "B_UGV_01_rcws_F";
	case "B_UGV_01_F":
	{
		_clear = true;
		if (isClass (configFile >> "CfgPatches" >> "AGM_Medical")) then
		{
			_items = [["AGM_Bloodbag",10],["AGM_Epipen", 10],["AGM_Morphine",20],["AGM_Bandage",100]];
		};
		_magazines = [["1Rnd_HE_Grenade_shell",20],["30Rnd_65x39_caseless_mag_Tracer",30],["20Rnd_762x51_Mag",5],["200Rnd_65x39_cased_Box_Tracer",5]];
	};
	case "B_UAV_01_F":
	{
		_clear = true;
	};
	case "Box_NATO_Ammo_F":
	{
		_clear = true;
		_magazines = [["1Rnd_HE_Grenade_shell",20],["30Rnd_65x39_caseless_mag_Tracer",30],["20Rnd_762x51_Mag",5],["200Rnd_65x39_cased_Box_Tracer",5]];
	};
	case "Box_NATO_Support_F":
	{
		_clear = true;
		_items = [["AGM_Bloodbag",10],["AGM_Epipen", 10],["AGM_Morphine",20],["AGM_Bandage",100]];
	};
	case "Box_NATO_AmmoOrd_F":
	{
		_clear = true;
		_magazines = [["SatchelCharge_Remote_Mag",2],["SLAMDirectionalMine_Wire_Mag",0],["DemoCharge_Remote_Mag",2]];
	};
	case "Box_NATO_WpsLaunch_F":
	{
		_clear = true;
		_magazines = [["Titan_AT",5],["Titan_AA",5]];
	};
	case "O_HMG_01_F";
	case "I_HMG_01_F";
	case "B_HMG_01_F";
	case "O_HMG_01_high_F";
	case "I_HMG_01_high_F";
	case "B_HMG_01_high_F";
	case "O_HMG_01_A_F";
	case "I_HMG_01_A_F";
	case "B_HMG_01_A_F";
	case "O_GMG_01_F";
	case "I_GMG_01_F";
	case "B_GMG_01_F";
	case "O_GMG_01_high_F";
	case "I_GMG_01_high_F";
	case "B_GMG_01_high_F";
	case "O_GMG_01_A_F";
	case "I_GMG_01_A_F";
	case "B_GMG_01_A_F":
	{
		_thermal = false;
	};
	case "B_MBT_01_arty_F":
	{
		_clear = true;
	};
	case "B_Truck_01_Repair_F";
	case "B_Truck_01_fuel_F";
	case "B_Truck_01_ammo_F":
	{
		_clear = true;
	};
	case "B_supplyCrate_F":
	{
		_clear = true;
	};
	case "B_SDV_01_F";
	case "B_Boat_Transport_01_F":
	{
		_clear = true;
	};
};
[_veh,_clear,_magazines,_weapons,_items,_backpacks,_thermal,_removeWeapons] call CODI_Loadout_fnc_vehicleEquip;