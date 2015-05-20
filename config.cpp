class CfgPatches
{
	class CODI_ArtilleryComputer
	{
		authors[] = {"Coding"};
		version = 0.1;
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		license = "CC-BY-NC-SA 4.0";
		licenseURL = "http://creativecommons.org/licenses/by-nc-nd/4.0/";
	};
};

#include "CODI\Loadout\dialog.hpp"

class CfgFunctions
{
	class CODI
	{
		class Loadout
		{
			class init
			{
				preInit = 1;
				file = "CODI\Loadout\init.sqf";
			};
		};
	};
};

class CfgVehicles
{
	class B_Soldier_support_base_F;
	class B_support_AMort_F : B_Soldier_support_base_F
	{
		class eventHandlers
		{
			init = "[_this select 0] execVM 'CODI_ArtilleryComputer\initB_support_AMort_F.sqf';";
		};
	};
};
