class CfgPatches
{
	class SAF2035
	{
		units[] = {};
		weapons[] = {
			"SAF_AK6_base_blk",
			"SAF_AK6_base_khk",
			"SAF_AK6_base_snd",
			"SAF_AK6GL_base_blk",
			"SAF_AK6GL_base_khk",
			"SAF_AK6GL_base_snd",
			"SAF_AK6B_base_blk",
			"SAF_AK6B_base_khk",
			"SAF_AK6B_base_snd",
			"SAF_KSP90C_base",
			"SAF_PSG25_base",
			"SAF_Rb57",
			"SAF_MP5K_base",
			"SAF_Rb35_Tan",
			"SAF_Rb35_Grn",
			"SAF_AK6_khk_R",
			"SAF_AK6_snd_R",
			"SAF_AK6_blk_SOG",
			"SAF_AK6GL_khk_TL",
			"SAF_AK6GL_snd_TL",
			"SAF_AK6GL_blk_SOG",
			"SAF_AK6GL_khk_SP",
			"SAF_AK6GL_snd_SP",
			"SAF_AK6B_khk_MA",
			"SAF_AK6B_snd_MA",
			"SAF_AK6B_blk_SOG",
			"SAF_KSP90C_MG",
			"SAF_PSG25_SS",
			"SAF_MP5K_SOG"
		};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 1.62;
		requiredAddons[] =
		{
			"A3_Data_F",
			"A3_Structures_F_Mil_Flags",
			"A3_UI_F",
			"A3_Weapons_F",
			"A3_Weapons_F_Items",
			"A3_Weapons_F_Launchers_NLAW",
			"A3_Weapons_F_Pistols_P07",
			"A3_Weapons_F_Mark",
			"A3_Weapons_F_Mark_LongRangeRifles_DMR_02",
			"A3_Weapons_F_Mark_Machineguns_MMG_01",
			"A3_Weapons_F_Exp"
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
		logo = "\saf2035_main\data\ui\swe_icon_ca.paa";
		logoOver = "\saf2035_main\data\ui\swe_icon_ca.paa";
		logoSmall = "\saf2035_main\data\ui\swe_icon_ca.paa";
		name = "Swedish Armed Forces 2035";
		overview = "Swedish Armed Forces 2035 comes with a wide varaity of units based on the Swedish Armed Forces in a futuristic version. Units comes in regular M90 Woodland and M90K Desert versions. Also Special Forces in Scorpion W2 version.";
		picture = "\saf2035_main\data\ui\saf2035_logo_ca.paa";
	};
};
class cfgFactionClasses
{
	class saf
	{
		displayName = "Swedish Armed Forces 2035";
		icon = "\saf2035_main\data\ui\swe_icon_ca.paa";
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
			init="(_this select 0) setFlagTexture '\saf2035_main\data\flag\flag_sweden_co.paa'";
		};
	};
};
class cfgWeapons
{
	//Weapons
	class arifle_SPAR_01_base_F;
	class arifle_SPAR_01_GL_base_F;
	class arifle_SPAR_03_base_F;
	class LMG_03_base_F;
	class srifle_LRR_F;
	class launch_NLAW_F;
	class SMG_05_F;
	class launch_B_Titan_short_F;
	class launch_I_Titan_short_F;
	class hgun_P07_khk_F;
	class SAF_AK6_base_blk: arifle_SPAR_01_base_F
	{
		access = 1;
		displayName = "AK6 (Black)";
		dlc = "SAF2035_Mod";
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_blk_F_X_CA.paa";
	};
	class SAF_AK6_base_khk: arifle_SPAR_01_base_F
	{
		access = 1;
		displayName = "AK6 (Green)";
		dlc = "SAF2035_Mod";
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_khk_F_X_CA.paa";
	};
	class SAF_AK6_base_snd: arifle_SPAR_01_base_F
	{
		access = 1;
		displayName = "AK6 (Desert)";
		dlc = "SAF2035_Mod";
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_snd_F_X_CA.paa";
	};
	class SAF_AK6GL_base_blk: arifle_SPAR_01_GL_base_F
	{
		access = 1;
		displayName = "AK6GL (Black)";
		dlc = "SAF2035_Mod";
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_blk_F_01_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_GL_blk_F_X_CA.paa";
	};
	class SAF_AK6GL_base_khk: arifle_SPAR_01_GL_base_F
	{
		access = 1;
		displayName = "AK6GL (Green)";
		dlc = "SAF2035_Mod";
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_khk_F_01_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_GL_khk_F_X_CA.paa";
	};
	class SAF_AK6GL_base_snd: arifle_SPAR_01_GL_base_F
	{
		access = 1;
		displayName = "AK6GL (Desert)";
		dlc = "SAF2035_Mod";
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_snd_F_01_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_GL_snd_F_X_CA.paa";
	};
	class SAF_AK6B_base_blk: arifle_SPAR_03_base_F
	{
		access = 1;
		displayName = "AK6B (Black)";
		dlc = "SAF2035_Mod";
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\UI\arifle_SPAR_03_blk_F_X_CA.paa";
	};
	class SAF_AK6B_base_khk: arifle_SPAR_03_base_F
	{
		access = 1;
		displayName = "AK6B (Green)";
		dlc = "SAF2035_Mod";
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_khk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_khk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\UI\arifle_SPAR_03_khk_F_X_CA.paa";
	};
	class SAF_AK6B_base_snd: arifle_SPAR_03_base_F
	{
		access = 1;
		displayName = "AK6B (Desert)";
		dlc = "SAF2035_Mod";
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_snd_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_snd_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\UI\arifle_SPAR_03_snd_F_X_CA.paa";
	};
	class SAF_KSP90C_base: LMG_03_base_F
	{
		access = 1;
		displayName = "KSP90C";
		dlc = "SAF2035_Mod";
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\LMG_03_f_acc_co.paa","\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\LMG_03_f_body_co.paa"};
		picture = "\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\UI\icon_LMG_03_F_X_CA.paa";
	};
	class SAF_PSG25_base: srifle_LRR_F
	{
		access = 1;
		displayName = "PSG25";
		dlc = "SAF2035_Mod";
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"\a3\weapons_f_bootcamp\longrangerifles\m320_camo\data\cheytac_m200_blufor.rvmat"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\LongRangeRifles\M320\Data\srifle_LRR_tna_F_co.paa"};
		picture = "\A3\Weapons_F_Bootcamp\LongRangeRifles\M320_camo\data\UI\gear_M320_LRR_X_CA.paa";
	};
	class SAF_Rb57: launch_NLAW_F
	{
		author = "Kimukun";
		displayName = "Robot 57 NLAW";
		dlc = "SAF2035_Mod";
		scope = 2;
	}
	class SAF_MP5K_base: SMG_05_F
	{
		author = "Kimukun";
		displayName = "MP5K";
		dlc = "SAF2035_Mod";
		scope = 2;
	}
	class SAF_Rb35_Tan: launch_B_Titan_short_F
	{
		author = "Kimukun";
		displayName = "Robot 35 Mini-Spike";
		dlc = "SAF2035_Mod";
		scope = 2;
	}
	class SAF_Rb35_Grn: launch_I_Titan_short_F
	{
		author = "Kimukun";
		displayName = "Robot 35 Mini-Spike";
		dlc = "SAF2035_Mod";
		scope = 2;
	}
	//Weapon-loadouts
	class SAF_AK6_khk_R: SAF_AK6_base_khk
	{
		author = "Kimukun";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsOptic
			{
				item = "optic_ERCO_khk_F";
				slot = "CowsSlot";
			};
		};
	};
	class SAF_AK6_snd_R: SAF_AK6_base_snd
	{
		author = "Kimukun";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsOptic
			{
				item = "optic_ERCO_snd_F";
				slot = "CowsSlot";
			};
		};
	};
	class SAF_AK6_blk_SOG: SAF_AK6_base_blk
	{
		author = "Kimukun";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_m";
				slot = "MuzzleSlot";
			};
			class LinkedItemsOptic
			{
				item = "optic_ERCO_blk_F";
				slot = "CowsSlot";
			};
		};
	};
	class SAF_AK6GL_khk_TL: SAF_AK6GL_base_khk
	{
		author = "Kimukun";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsOptic
			{
				item = "optic_ERCO_khk_F";
				slot = "CowsSlot";
			};
		};
	};
	class SAF_AK6GL_snd_TL: SAF_AK6GL_base_snd
	{
		author = "Kimukun";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsOptic
			{
				item = "optic_ERCO_snd_F";
				slot = "CowsSlot";
			};
		};
	};
	class SAF_AK6GL_blk_SOG: SAF_AK6GL_base_blk
	{
		author = "Kimukun";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_m";
				slot = "MuzzleSlot";
			};
			class LinkedItemsOptic
			{
				item = "optic_ERCO_blk_F";
				slot = "CowsSlot";
			};
		};
	};
	class SAF_AK6GL_khk_SP: SAF_AK6GL_base_khk
	{
		author = "Kimukun";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_m_khk_F";
				slot = "MuzzleSlot";
			};
			class LinkedItemsOptic
			{
				item = "optic_ERCO_khk_F";
				slot = "CowsSlot";
			};
		};
	};
	class SAF_AK6GL_snd_SP: SAF_AK6GL_base_snd
	{
		author = "Kimukun";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_m_snd_F";
				slot = "MuzzleSlot";
			};
			class LinkedItemsOptic
			{
				item = "optic_ERCO_khk_F";
				slot = "CowsSlot";
			};
		};
	};
	class SAF_AK6B_khk_MA: SAF_AK6B_base_khk
	{
		author = "Kimukun";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsOptic
			{
				item = "optic_SOS_khk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item="bipod_01_F_khk";
				slot="UnderBarrelSlot";
			};
		};
	};
	class SAF_AK6B_snd_MA: SAF_AK6B_base_snd
	{
		author = "Kimukun";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsOptic
			{
				item = "optic_SOS";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item="bipod_01_F_snd";
				slot="UnderBarrelSlot";
			};
		};
	};
	class SAF_AK6B_blk_SOG: SAF_AK6B_base_blk
	{
		author = "Kimukun";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_B";
				slot = "MuzzleSlot";
			};
			class LinkedItemsOptic
			{
				item = "optic_SOS_khk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item="bipod_01_F_blk";
				slot="UnderBarrelSlot";
			};
		};
	};
	class SAF_KSP90C_MG: SAF_KSP90C_base
	{
		author = "Kimukun";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsOptic
			{
				item = "optic_ERCO_blk_F";
				slot = "CowsSlot";
			};
		};
	};
	class SAF_PSG25_SS: SAF_PSG25_base
	{
		author = "Kimukun";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_LRPS_tna_F";
				slot = "CowsSlot";
			};
		};
	};
	class SAF_MP5K_SOG: SAF_MP5K_base
	{
		author = "Kimukun";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_L";
				slot = "MuzzleSlot";
			};
			class LinkedItemsOptic
			{
				item = "optic_Aco_smg";
				slot = "CowsSlot";
			};
		};
	};
};
class CfgMarkers
{
	class flag_NATO;
	class sweden_marker : flag_NATO
	{
		name = "Sweden";
		icon = "\saf2035_main\data\ui\sweden_marker.paa";
		texture = "\saf2035_main\data\ui\sweden_marker.paa";
	};
};
