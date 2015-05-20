class CfgPatches
{
	class CODI_Loadout
	{
		authors[] = {"Coding"};
		version = 0.1;
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		license = "CC-BY-NC-ND 4.0";
		licenseURL = "http://creativecommons.org/licenses/by-nc-nd/4.0/";
	};
};

#include "CODI\Loadout\dialog.hpp"

class CfgFunctions
{
	class CODI_Loadout
	{
		class functions
		{
			/*class init
			{
				file = "CODI_Loadout\CODI\Loadout\fnc_init.sqf";
			};*/
			class equip
			{
				file = "CODI_Loadout\CODI\Loadout\fnc_equip.sqf";
			};
			class loadouts
			{
				file = "CODI_Loadout\CODI\Loadout\fnc_loadouts.sqf";
			};
			class initClassSelector
			{
				file = "CODI_Loadout\CODI\Loadout\fnc_initClassSelector.sqf";
			};
			class loadoutSelector
			{
				file = "CODI_Loadout\CODI\Loadout\fnc_loadoutSelector.sqf";
			};
			class radio
			{
				file = "CODI_Loadout\CODI\Loadout\fnc_radio.sqf";
			};
			class umziehen
			{
				file = "CODI_Loadout\CODI\Loadout\fnc_umziehen.sqf";
			};
			class interact
			{
				file = "CODI_Loadout\CODI\Loadout\fnc_interact.sqf";
			};
			class setVariable
			{
				file = "CODI_Loadout\CODI\Loadout\fnc_setVariable.sqf";
			};
			class initTeleport
			{
				file = "CODI_Loadout\CODI\Loadout\fnc_initTeleport.sqf";
			};
			class teleport
			{
				file = "CODI_Loadout\CODI\Loadout\fnc_teleport.sqf";
			};
		};
	};
};

class CfgVehicles
{
	class ReammoBox_F;
	class B_supplyCrate_F : ReammoBox_F
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				condition = 1;
				displayName = "Interactions";
				distance = 2;
				selection = "";
				class VirtualArsenal
				{
					condition = "player getVariable['CODI_Loadout_va', false]";
					displayName = "Virtual Arsenal";
					distance = 5;
					icon = "\a3\ui_f\data\IGUI\Cfg\Actions\reload_ca.paa";
					priority = 1.2;
					showDisabled = 0;
					statement = "['Open',true] spawn BIS_fnc_arsenal;";
				};
				class ClassSelector
				{
					condition = "player getVariable['CODI_Loadout_cs', false]";
					displayName = "Klasse wählen";
					distance = 5;
					icon = "\a3\ui_f\data\IGUI\Cfg\Actions\reload_ca.paa";
					priority = 1.2;
					showDisabled = 0;
					statement = "createdialog 'CODI_Loadout_ClassSelector';";
				};
				class Equip
				{
					condition = "true";
					displayName = "Ausrüsten";
					distance = 5;
					icon = "\a3\ui_f\data\IGUI\Cfg\Actions\reload_ca.paa";
					priority = 1.2;
					showDisabled = 0;
					statement = "[player, player getVariable['CODI_Loadout_Class', typeof player], player getVariable['CODI_Loadout_Visual','flecktarn'], str(side player), player getVariable['CODI_Loadout_ForceUnsilenced', false], player getVariable['CODI_Loadout_ForceSilenced', false], false] call CODI_Loadout_fnc_loadouts;";
				};
				class enableVA
				{
					condition = "!(player getVariable['CODI_Loadout_va', false]) && (getPlayerUID player == '76561197961486247' || getPlayerUID player == '76561197996296785' || getPlayerUID player == '_SP_PLAYER_' || serverCommandAvailable '#kick')";
					displayName = "Enable Virtual Arsenal";
					distance = 5;
					icon = "\a3\ui_f\data\IGUI\Cfg\Actions\reload_ca.paa";
					priority = 1.2;
					showDisabled = 0;
					statement = "[[player, 'CODI_Loadout_va', true],'CODI_Loadout_fnc_setVariable',true,true] call BIS_fnc_MP;";
				};
				class disableVA
				{
					condition = "player getVariable['CODI_Loadout_va', false] && (getPlayerUID player == '76561197961486247' || getPlayerUID player == '76561197996296785' || getPlayerUID player == '_SP_PLAYER_' || serverCommandAvailable '#kick')";
					displayName = "Disable Virtual Arsenal";
					distance = 5;
					icon = "\a3\ui_f\data\IGUI\Cfg\Actions\reload_ca.paa";
					priority = 1.2;
					showDisabled = 0;
					statement = "[[player, 'CODI_Loadout_va', false],'CODI_Loadout_fnc_setVariable',true,true] call BIS_fnc_MP;";
				};
				class enableCS
				{
					condition = "!(player getVariable['CODI_Loadout_cs', false]) && (getPlayerUID player == '76561197961486247' || getPlayerUID player == '76561197996296785' || getPlayerUID player == '_SP_PLAYER_' || serverCommandAvailable '#kick')";
					displayName = "Enable CS";
					distance = 5;
					icon = "\a3\ui_f\data\IGUI\Cfg\Actions\reload_ca.paa";
					priority = 1.2;
					showDisabled = 0;
					statement = "[[player, 'CODI_Loadout_cs', true],'CODI_Loadout_fnc_setVariable',true,true] call BIS_fnc_MP;";
				};
				class disableCS
				{
					condition = "player getVariable['CODI_Loadout_cs', false] && (getPlayerUID player == '76561197961486247' || getPlayerUID player == '76561197996296785' || getPlayerUID player == '_SP_PLAYER_' || serverCommandAvailable '#kick')";
					displayName = "Disable CS";
					distance = 5;
					icon = "\a3\ui_f\data\IGUI\Cfg\Actions\reload_ca.paa";
					priority = 1.2;
					showDisabled = 0;
					statement = "[[player, 'CODI_Loadout_cs', false],'CODI_Loadout_fnc_setVariable',true,true] call BIS_fnc_MP;";
				};
				class teleport
				{
					condition = "true";
					displayName = "Teleport";
					distance = 5;
					icon = "\a3\ui_f\data\IGUI\Cfg\Actions\reload_ca.paa";
					priority = 1.2;
					showDisabled = 0;
					statement = "createdialog 'CODI_Loadout_Teleport';";
				};
			};
		};
		class TransportBackpacks
		{
		
		};
		class TransportItems
		{
		
		};
		class TransportMagazines
		{
		
		};
		class TransportWeapons
		{
		
		};
	};
};
