class CfgPatches {
  class SAF_SOG_CONFIG {
    units[] = {
      "SAF_Scorpion_Soldier_base",
      "SAF_SOG_Diver_base",
      "SAF_Scorpion_SOG_SAT",
			"SAF_Scorpion_SOG_SDemo",
			"SAF_Scorpion_SOG_SMM",
			"SAF_Scorpion_SOG_SME",
			"SAF_Scorpion_SOG_STL",
			"SAF_Scorpion_SOG_SMG",
      "SAF_SOG_Diver_STL",
      "SAF_SOG_Diver_SDemo",
      "SAF_SOG_Diver_SME",
      "SAF_SOG_Diver_SMG",
      "SAF_Scorpion_Kitbag_base",
      "SAF_Scorpion_CompactBag_base",
      "SAF_Scorpion_CompactBag_OP",
			"SAF_Scorpion_CompactBag_MM",
			"SAF_Scorpion_Kitbag_TL",
			"SAF_Scorpion_Kitbag_MG",
      "SAF_VH_Blk_S",
      "SAF_VH_Blk_SMG"
    };
    weapons[] = {
      "SAF_Scorpion_Uniform",
      "SAF_Scorpion_PC",
			"SAF_Scorpion_PC_lite",
			"SAF_Scorpion_PC_spec",
      "SAF_Scoprion_Helmet_ECH_lite",
			"SAF_Scoprion_Boonie"
    };
    magazines[] = {};
		ammo[] = {};
		requiredVersion = 1.62;
		requiredAddons[] = {
      "A3_UI_F",
			"A3_Characters_F",
			"A3_Characters_F_Beta",
			"A3_Characters_F_Bootcamp",
			"A3_Characters_F_Exp",
			"A3_Characters_F_Mark"
		};
		author = "Kimukun";
		version = 1.0;
  };
};
class CfgVehicles {
  //Base Soldiers config
  class B_Soldier_base_F;
  class SAF_Scorpion_C_Soldier_base: B_Soldier_base_F {
		author = "Kimukun";
		backpack = "";
		camouflage = 0.8;
		canDeactivateMines = 0;
		cost = 100000;
		detectSkill = 20;
		displayName = "Should not Show in Editor";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		engieneer = 0;
		faction = "SAF";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\saf2035_sog\data\uniform\scorpion_cyre.paa"};
		icon="iconMan";
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};
		items[] = {};
		linkedItems[] = {};
		magazines[] = {};
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		respawnItems[] = {};
		respawnLinkedItems[] = {};
		respawnMagazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		role = "Rifleman";
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		sensitivity = 3;
		side = 1;
		textPlural = "infantry";
		textSingular = "infantry";
		threat[] = {1,0.1,0.1};
		uavHacker = 0;
		uniformClass = "SAF_Scorpion_Uniform";
		weapons[] = {"Throw","Put"};
	};
  class SAF_SOG_Diver_base: B_Soldier_base_F {
    author = "Kimukun";
		backpack = "";
		camouflage = 0.8;
		canDeactivateMines = 0;
		cost = 100000;
		detectSkill = 20;
		displayName = "Should not Show in Editor";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		engieneer = 0;
		faction = "SAF";
    hiddenSelections[] = {"Camo1","Camo2","insignia"};
    hiddenSelectionsMaterials[] = {};
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\diver_suit_nato_co.paa","\A3\Characters_F\Common\Data\diver_equip_nato_co.paa"};
    hiddenUnderwaterSelections[] = {"hide"};
    hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};
		icon="iconMan";
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};
		items[] = {};
		linkedItems[] = {};
		magazines[] = {};
    model = "\A3\characters_F\Common\diver_slotable";
		respawnItems[] = {};
		respawnLinkedItems[] = {};
		respawnMagazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		role = "Specialist";
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		sensitivity = 3;
		side = 1;
		textPlural = "specialists";
		textSingular = "specialist";
		threat[] = {1,0.1,0.1};
		uavHacker = 0;
		uniformClass = "U_B_Wetsuit";
		weapons[] = {"Throw","Put"};
  };
  // SOG Soldier Config
  class SAF_Scorpion_SOG_SAT: SAF_Scorpion_Soldier_base {
		backpack = "SAF_Scorpion_CompactBag_OP";
		displayName = "Specialist";
    linkedItems[] = {
			"SAF_Scorpion_PC_lite",
			"SAF_Scoprion_Helmet_ECH_lite",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGogglesB_grn_F"
		};
		magazines[] = {
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"B_IR_Grenade",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"NLAW_F",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnLinkedItems[] = {
			"SAF_Scorpion_PC_lite",
			"SAF_Scoprion_Helmet_ECH_lite",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGogglesB_grn_F"
		};
		respawnMagazines[] = {
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"B_IR_Grenade",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"NLAW_F",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnWeapons[] = {
			"SAF_AK6_blk_SOG",
			"Rangefinder",
			"hgun_P07_khk_Snds_F",
			"SAF_Rb57",
			"Throw",
			"Put"
		};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weapons[] = {
			"SAF_AK6_blk_SOG",
			"Rangefinder",
			"hgun_P07_khk_Snds_F",
			"SAF_Rb57",
			"Throw",
			"Put"
		};
	};
	class SAF_Scorpion_SOG_SDemo: SAF_Scorpion_Soldier_base {
		backpack = "SAF_Scorpion_Kitbag_base";
		displayName = "Specialist (Demo)";
		class eventHandlers {
			init = "(_this select 0) execVM '\saf2035_sog\scripts\sogexpbags.sqf';";
		};
		linkedItems[] = {
			"SAF_Scorpion_PC_lite",
			"SAF_Scoprion_Helmet_ECH_lite",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGogglesB_grn_F"
		};
		magazines[] = {
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"B_IR_Grenade",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnLinkedItems[] = {
			"SAF_Scorpion_PC_lite",
			"SAF_Scoprion_Helmet_ECH_lite",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGogglesB_grn_F"
		};
		respawnMagazines[] = {
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"B_IR_Grenade",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnWeapons[] = {
			"SAF_AK6_blk_SOG",
			"Rangefinder",
			"hgun_P07_khk_Snds_F",
			"Throw",
			"Put"
		};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weapons[] = {
			"SAF_AK6_blk_SOG",
			"Rangefinder",
			"hgun_P07_khk_Snds_F",
			"Throw",
			"Put"
		};
	};
	class SAF_Scorpion_SOG_SMM: SAF_Scorpion_C_Soldier_base {
		backpack = "SAF_Scorpion_CompactBag_MM";
		displayName = "Specialist (Marksman)";
		linkedItems[] = {
			"SAF_Scorpion_PC_lite",
			"SAF_Scoprion_Helmet_ECH_lite",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGogglesB_grn_F"
		};
		magazines[] = {
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"B_IR_Grenade",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnLinkedItems[] = {
			"SAF_Scorpion_PC_lite",
			"SAF_Scoprion_Helmet_ECH_lite",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGogglesB_grn_F"
		};
		respawnMagazines[] = {
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"B_IR_Grenade",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnWeapons[] = {
			"SAF_AK6B_blk_SOG",
			"Rangefinder",
			"hgun_P07_khk_Snds_F",
			"Throw",
			"Put"
		};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weapons[] = {
			"SAF_AK6B_blk_SOG",
			"Rangefinder",
			"hgun_P07_khk_Snds_F",
			"Throw",
			"Put"
		};
	};
	class SAF_Scorpion_SOG_SME: SAF_Scorpion_Soldier_base {
		backpack = "SAF_Scorpion_Kitbag_base";
		displayName = "Specialist (Medic)";
		class eventHandlers {
			init = "(_this select 0) execVM '\saf2035_sog\scripts\medicbags.sqf';";
		};
		linkedItems[] = {
			"SAF_Scorpion_PC_lite",
			"SAF_Scoprion_Helmet_ECH_lite",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGogglesB_grn_F"
		};
		magazines[] = {
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"B_IR_Grenade",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnLinkedItems[] = {
			"SAF_Scorpion_PC_lite",
			"SAF_Scoprion_Helmet_ECH_lite",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGogglesB_grn_F"
		};
		respawnMagazines[] = {
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"B_IR_Grenade",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnWeapons[] = {
			"SAF_AK6_blk_SOG",
			"Rangefinder",
			"hgun_P07_khk_Snds_F",
			"Throw",
			"Put"
		};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weapons[] = {
			"SAF_AK6_blk_SOG",
			"Rangefinder",
			"hgun_P07_khk_Snds_F",
			"Throw",
			"Put"
		};
	};
	class SAF_Scorpion_SOG_STL: SAF_Scorpion_Soldier_base {
		backpack = "SAF_Scorpion_Kitbag_TL";
		displayName="Specialist (Team Leader)";
		class eventHandlers {
			init = "(_this select 0) execVM '\saf2035\scripts\sogtlbags.sqf';";
		};
		linkedItems[] = {
			"SAF_Scorpion_PC_lite",
			"SAF_Scoprion_Helmet_ECH_lite",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGogglesB_grn_F"
		};
		magazines[] = {
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"B_IR_Grenade",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnLinkedItems[] = {
			"SAF_Scorpion_PC_lite",
			"SAF_Scoprion_Helmet_ECH_lite",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGogglesB_grn_F"
		};
		respawnMagazines[] = {
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"B_IR_Grenade",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnWeapons[] = {
			"SAF_AK6_blk_SOG",
			"Rangefinder",
			"hgun_P07_khk_Snds_F",
			"Throw",
			"Put"
		};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weapons[] = {
			"SAF_AK6_blk_SOG",
			"Rangefinder",
			"hgun_P07_khk_Snds_F",
			"Throw",
			"Put"
		};
	};
	class SAF_Scorpion_SOG_MG: SAF_Scorpion_Soldier_base {
		backpack = "SAF_Scorpion_Kitbag_MG";
		displayName = "Specialist (MG)";
		linkedItems[] = {
			"SAF_Scorpion_PC_lite",
			"SAF_Scoprion_Helmet_ECH_lite",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGogglesB_grn_F"
		};
		magazines[] = {
			"200Rnd_556x45_Box_Tracer_Red_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"B_IR_Grenade",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnLinkedItems[] = {
			"SAF_Scorpion_PC_lite",
			"SAF_Scoprion_Helmet_ECH_lite",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGogglesB_grn_F"
		};
		respawnMagazines[] = {
			"200Rnd_556x45_Box_Tracer_Red_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"B_IR_Grenade",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnWeapons[] = {
			"SAF_KSP90C_MG",
			"Rangefinder",
			"hgun_P07_khk_Snds_F",
			"Throw",
			"Put"
		};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weapons[] = {
			"SAF_KSP90C_MG",
			"Rangefinder",
			"hgun_P07_khk_Snds_F",
			"Throw",
			"Put"
		};
	};
  class SAF_SOG_Diver_STL: SAF_SOG_Diver_base {
    backpack = "SAF_VH_Blk_S";
		displayName="Specialist (Team Leader)";
		class eventHandlers {
			init = "(_this select 0) execVM '\saf2035\scripts\sogtlbags.sqf';";
		};
    linkedItems[] = {
      "V_RebreatherB",
      "G_B_Diving",
      "ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGogglesB_blk_F"
    };
    magazines[] = {
      "HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"B_IR_Grenade",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"Chemlight_green",
			"Chemlight_green"
    };
    respawnLinkedItems[] = {
      "V_RebreatherB",
      "G_B_Diving",
      "ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGogglesB_blk_F"
    };
    respawnMagazines[] = {
      "HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"B_IR_Grenade",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"Chemlight_green",
			"Chemlight_green"
    };
    respawnWeapons[] = {
      "SAF_AK6_blk_SOG",
			"Rangefinder",
			"hgun_P07_khk_Snds_F",
			"Throw",
			"Put"
    };
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    weapons[] = {
      "SAF_AK6_blk_SOG",
			"Rangefinder",
			"hgun_P07_khk_Snds_F",
			"Throw",
			"Put"
    };
  };
  // Backpacks
  class B_Kitbag_Base;
	class B_AssaultPack_Base;
  class B_ViperHarness_base_F;
  class SAF_Scorpion_Kitbag_base: B_Kitbag_Base {
		author = "Kimukun";
		baseBackpack = "SAF_Scorpion_Kitbag_base";
		displayName = "Scorpion W2 Kitbag";
		dlc = "SAF2035_Mod";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\saf2035_sog\data\backpack\scorpion_kitbag.paa"};
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_b_c_kitbag_rgr.paa";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
	};
	class SAF_Scorpion_CompactBag_base: B_AssaultPack_Base {
		author = "Kimukun";
		baseBackpack = "SAF_Scorpion_CompactBag_base";
		displayName = "Scorpion W2 Compact Bag";
		dlc = "SAF2035_Mod";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\saf2035_sog\data\backpack\scorpion_compact.paa"};
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_b_c_kitbag_rgr.paa";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
	};
  class SAF_Scorpion_CompactBag_OP: SAF_Scorpion_CompactBag_base {
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportMagazines {
			class _xx_30Rnd_556x45_Stanag_Tracer_Red {
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
				count = 6;
			};
		};
	};
	class SAF_Scorpion_CompactBag_MM: SAF_Scorpion_CompactBag_base {
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportMagazines {
			class _xx_20Rnd_762x51_Mag {
				magazine = "20Rnd_762x51_Mag";
				count = 6;
			};
		};
	};
	class SAF_Scorpion_Kitbag_TL: SAF_Scorpion_Kitbag_base {
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportMagazines {
			class _xx_30Rnd_556x45_Stanag_Tracer_Red {
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
				count = 4;
			};
			class _xx_1Rnd_HE_Grenade_shell {
				magazine = "1Rnd_HE_Grenade_shell";
				count = 4;
			};
		};
	};
	class SAF_Scorpion_Kitbag_MG: SAF_Scorpion_Kitbag_base {
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class TransportMagazines {
			class _xx_200Rnd_556x45_Box_Tracer_Red_F {
				magazine = "200Rnd_556x45_Box_Tracer_Red_F";
				count = 3;
			};
		};
	};
  class SAF_VH_Blk_S: B_ViperHarness_base_F {
    scope = 1;
    scopeArsenal = 0;
    scopeCurator = 0;
    class TransportMagazines {
      class _xx_30Rnd_556x45_Stanag_Tracer_Red {
        magazine = "30Rnd_556x45_Stanag_Tracer_Red";
        count = 10;
      };
    };
  };
  class SAF_VH_Blk_SMG: B_ViperHarness_base_F {
    scope = 1;
    scopeArsenal = 0;
    scopeCurator = 0;
    class TransportMagazines {
      class _xx_200Rnd_556x45_Box_Tracer_Red_F {
        magazine = "200Rnd_556x45_Box_Tracer_Red_";
        count = 5;
      };
    };
  };
};
class cfgWeapons {
  // Uniforms
  class UniformItem;
	class Uniform_Base;
  class SAF_Scorpion_Uniform: Uniform_Base {
		author = "Kimukun";
		scope = 2;
		displayName = "Scorpion W2 (Cyre)";
		dlc = "SAF2035_Mod";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\saf2035_sog\data\uniform\scorpion_cyre.paa"};
		class ItemInfo: UniformItem {
			uniformClass = "SAF_Scorpion_C_Soldier_base";
			containerClass = "Supply40";
			mass = 40;
		};
	};
  // Vests
  class VestItem;
	class V_PlateCarrier1_rgr;
  class SAF_Scorpion_PC: V_PlateCarrier1_rgr {
		author = "Kimukun";
		displayName = "Scorpion W2 Platecarrier";
		dlc = "SAF2035_Mod";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\saf2035\data\vest\scorpion_vest.paa"};
		class ItemInfo: VestItem {
			_generalMacro = "VestItem";
			author = "Kimukun";
			containerClass = "Supply140";
			hiddenSelections[] = {"camo"};
			mass = 100;
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			scope = 0;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_Vest01";
			uniformType = "Default";
			class HitpointsProtectionInfo {
				class Abdomen {
					armor = 20;
					hitpointName = "HitAbdomen";
					passThrough = 0.2;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
				class Chest {
					armor = 20;
					HitpointName = "HitChest";
					passThrough = 0.2;
				};
				class Diaphragm {
					armor = 20;
					HitpointName = "HitDiaphragm";
					passThrough = 0.30000001;
				};
			};
		};
	};
	class SAF_Scorpion_PC_lite: V_PlateCarrier1_rgr {
		author = "Kimukun";
		displayName = "Scorpion W2 Platecarrier Lite";
		dlc = "SAF2035_Mod";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\saf2035\data\vest\scorpion_vest.paa"};
		class ItemInfo: VestItem {
			_generalMacro = "VestItem";
			author = "Kimukun";
			containerClass = "Supply140";
			hiddenSelections[] = {"camo"};
			mass = 100;
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			scope = 0;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_Vest02";
			uniformType = "Default";
			class HitpointsProtectionInfo {
				class Abdomen {
					armor = 20;
					hitpointName = "HitAbdomen";
					passThrough = 0.2;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
				class Chest {
					armor = 20;
					HitpointName = "HitChest";
					passThrough = 0.2;
				};
				class Diaphragm {
					armor = 20;
					HitpointName = "HitDiaphragm";
					passThrough = 0.30000001;
				};
			};
		};
	};
	class SAF_Scorpion_PC_spec: V_PlateCarrier1_rgr
	{
		author = "Kimukun";
		displayName = "Scorpion W2 Platecarrier Special";
		dlc = "SAF2035_Mod";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\saf2035\data\vest\scorpion_vest.paa"};
		class ItemInfo: VestItem {
			_generalMacro = "VestItem";
			author = "Kimukun";
			containerClass = "Supply140";
			hiddenSelections[] = {"camo"};
			mass = 100;
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			scope = 0;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			uniformType = "Default";
			class HitpointsProtectionInfo {
				class Abdomen {
					armor = 20;
					hitpointName = "HitAbdomen";
					passThrough = 0.2;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
				class Chest {
					armor = 20;
					HitpointName = "HitChest";
					passThrough = 0.2;
				};
				class Diaphragm {
					armor = 20;
					HitpointName = "HitDiaphragm";
					passThrough = 0.30000001;
				};
			};
		};
	};
  //Headgear
	class H_HelmetB;
	class HeadgearItem;
  class SAF_Scoprion_Helmet_ECH_lite: H_HelmetB
	{
		author = "Kimukun";
		displayName = "Scorpion W2 ECH Lite";
		dlc = "SAF2035_Mod";
		picture = "\saf2035\data\ui\echM90.paa";
		model = "A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\saf2035\data\headgear\scorpion_helmet.paa"};
		class ItemInfo: HeadgearItem {
			mass = 20;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class SAF_Scoprion_Boonie: H_HelmetB {
		author = "Kimukun";
		displayName = "Scorpion W2 Boonie";
		dlc = "SAF2035_Mod";
		picture = "\saf2035\data\ui\boonieMC.paa";
		model = "A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\saf2035\data\headgear\scorpion_boonie.paa"};
		class ItemInfo: HeadgearItem {
			mass = 20;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
};
class cfgGroups {
  class West {
    class SAF {
      name = "Swedish Armed Forces 2035";
      class SOG_Groups {
        name = "SOG Teams";
        class DA_6 {
          name = "Direct Action 6-man";
          faction = "SAF";
          icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
          side = 1;
          class Unit0 {
            side = 1;
            vehicle = "SAF_Scorpion_SOG_STL";
            rank = "CAPTAIN";
            position[] = {0,0,0};
          };
          class Unit1 {
            side = 1;
            vehicle = "SAF_Scorpion_SOG_SME";
            rank = "LIEUTENANT";
            position[] = {5,-5,0};
          };
          class Unit2 {
            side = 1;
            vehicle = "SAF_Scorpion_SOG_SAT";
            rank = "SERGEANT";
            position[] = {-5,-5,0};
          };
          class Unit3 {
            side = 1;
            vehicle = "SAF_Scorpion_SOG_SME";
            rank = "SERGEANT";
            position[] = {10,-10,0};
          };
          class Unit4 {
            side = 1;
            vehicle = "SAF_Scorpion_SOG_SAT";
            rank = "SERGEANT";
            position[] = {-10,-10,0};
          };
          class Unit5 {
            side = 1;
            vehicle = "SAF_Scorpion_SOG_SMG";
            rank = "SERGEANT";
            position[] = {15,-15,0};
          };
        };
      };
    };
  };
};
