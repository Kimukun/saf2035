class CfgPatches
{
	class SAF2035
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 1.62;
		requiredAddons[] =
		{
			"A3_Data_F",
			"A3_Structures_F_Mil_Flags",
			"A3_UI_F"
		};
		author = "Kimukun";
		version = 1.0;
	};
};
class CfgMods
{
	class Mod_Base;
	class SAF2035: Mod_Base
	{
		author = "Kimukun";
		dir = "saf2035";
		hideName = 1;
		hidePicture = 0;
		logo = "\saf2035\addons\saf2035\swe_icon_ca.paa";
		logoOver = "\saf2035\addons\saf2035_main\data\ui\swe_icon_ca.paa";
		logoSmall = "\saf2035\addons\saf2035_main\data\ui\swe_icon_ca.paa";
		name = "Swedish Armed Forces 2035";
		overview = "Swedish Armed Forces 2035 comes with a wide varaity of units based on the Swedish Armed Forces in a futuristic version. Units comes in regular M90 Woodland and M90K Desert versions. Also Special Forces in Scorpion W2 version.";
		picture = "\saf2035\addons\saf2035_main\data\ui\swe_icon_ca.paa";
	};
};
class cfgFactionClasses
{
	class saf
	{
		displayName = "Swedish Armed Forces 2035";
		icon = "\saf2035\addons\saf2035_main\data\ui\swe_icon.paa";
		priority = 1;
		side = 1;
	};
};
class CfgVehicles
{
	class FlagCarrier;
	class saf_Flag_Sweden_F: FlagCarrier
	{
		author = "Kimukun";
		scope = 2;
		displayName = "Flag (Sweden)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\saf2035\addons\saf2035_main\data\flag\flag_sweden_co.paa'";
		};
	};
};
class CfgMarkers
{
	class flag_NATO;
	class sweden_marker : flag_NATO
	{
		name = "Sweden";
		icon = "\saf2035\addons\saf2035_main\data\ui\sweden_marker.paa";
		texture = "\saf2035\addons\saf2035_main\data\ui\sweden_marker.paa";
	};
};