class CfgPatches
{
	class SAF_M90_CONFIG
	{
		units[] = {
			"SAF_M90_Soldier_base",
			"SAF_M90_Sniper_base",
			"SAF_M90L_Sniper_base",
			"SAF_M90_Soldier_R",
			"SAF_M90_Soldier_MG",
			"SAF_M90_Soldier_MA",
			"SAF_M90_Soldier_ME",
			"SAF_M90_Soldier_TL",
			"SAF_M90_Soldier_AT",
			"SAF_M90_Soldier_Exp",
			"SAF_M90_Soldier_AMG",
			"SAF_M90_Soldier_MS",
			"SAF_M90_Soldier_AMS",
			"SAF_M90_Sniper",
			"SAF_M90L_Sniper",
			"SAF_M90_Spotter",
			"SAF_M90L_Spotter",
			"SAF_M90_Sniper",
			"SAF_M90_Spotter",
			"SAF_M90_Kitbag_base",
			"SAF_M90_Kitbag_ME",
			"SAF_M90_Kitbag_MS",
			"SAF_M90_Kitbag_Exp",
			"SAF_M90_Kitbag_AMG",
			"SAF_M90_Kitbag_AMS",
			"SAF_M90_Kitbag_SP"
		};
		weapons[] = {
			"SAF_M90_Uniform",
			"SAF_M90_Sniper_FullGhillie",
			"SAF_M90L_Sniper_FullGhillie",
			"SAF_M90_PC",
			"SAF_M90_PC_lite",
			"SAF_M90_PC_spec",
			"SAF_M90_Helmet_ECH",
			"SAF_M90_Helmet_ECH_lite",
			"SAF_M90_Boonie"
		};
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
class CfgVehicles
{
	//Base Soldiers config
	class B_Soldier_base_F;
	class SAF_M90_Soldier_base: B_Soldier_base_F
	{
		author = "Kimukun";
		backpack = "";
		camouflage = 1;
		canDeactivateMine = 0;
		cost = 100000;
		detectSkill = 20;
		dispalyName = "Should not Show in Editor";
		editorSubcategory = "EdSubcat_Personnel";
		engineer = 0;
		faction = "saf";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\saf2035_m90\data\uniform\m90_uniform.paa"};
		icon = "iconMan";
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};
		items[] = {};
		linkedItems[] = {};
		magazines[] = {};
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		respawnItem[] = {};
		respawnLinkedItem[] = {};
		repsawnMagazines[] = {};
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
		uniformClass = "SAF_M90_Uniform";
		weapons[] = {"Throw","Put"};
	};
	class SAF_M90_Sniper_base: B_Soldier_base_F
	{
		author = "Kimukun";
		backpack = "";
		camouflage = 0.2;
		canDeactivateMine = 0;
		cost = 100000;
		detectSkill = 20;
		displayName = "Should not Show in Editor";
		editorSubcategory = "EdSubcat_Personnel_Snipers";
		engineer = 0;
		faction = "saf";
		hiddenSelections[] = {"camo","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\INDEP\Data\ghillie_coverall_aaf_co.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_lsh_ca.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_lsh_co.paa"};
		hideProxySelections[] = {"ghillie_hide"};
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};
		items[] = {};
		linkedItems[] = {};
		magazines[] = {};
		model = "\A3\Characters_F_Mark\INDEP\i_fullghillie_f.p3d";
		respawnItem[] = {};
		respawnLinkedItem[] = {};
		repsawnMagazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		role = "Marksman";
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		sensitivity = 2;
		side = 1;
		textPlural = "snipers";
		textSingular = "sniper";
		threat[] = {1,0.1,0.1};
		uavHacker = 0;
		uniformClass = "SAF_M90_Sniper_FullGhillie";
		weapons[] = {"Throw","Put"};
	};
	class SAF_M90L_Sniper_base: B_Soldier_base_F
	{
		author = "Kimukun";
		backpack = "";
		camouflage = 0.2;
		canDeactivateMine = 0;
		cost = 100000;
		detectSkill = 20;
		displayName = "Should not Show in Editor";
		editorSubcategory = "EdSubcat_Personnel_Snipers";
		engineer = 0;
		faction = "saf";
		hiddenSelections[] = {"camo","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\ghillie_coverall_nato_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\ghillie_threads_tna_ca.paa","\A3\Characters_F_Exp\BLUFOR\Data\ghillie_threads_5LOD_tna_co.paa"};
		hideProxySelections[] = {"ghillie_hide"};
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};
		items[] = {};
		linkedItems[] = {};
		magazines[] = {};
		model = "\A3\Characters_F_Mark\INDEP\i_fullghillie_f.p3d";
		respawnItem[] = {};
		respawnLinkedItem[] = {};
		repsawnMagazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		role = "Marksman";
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		sensitivity = 2;
		side = 1;
		textPlural = "snipers";
		textSingular = "sniper";
		threat[] = {1,0.1,0.1};
		uavHacker = 0;
		uniformClass = "SAF_M90L_Sniper_FullGhillie";
		weapons[] = {"Throw","Put"};
	};
	//Soldiers M90 config
	class SAF_M90_Soldier_R: SAF_M90_Soldier_base
	{
		displayName = "Rifleman";
		linkedItems[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoogles_INDEP"
		};
		magazines[] = {
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnLinkedItem[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoogles_INDEP"
		};
		respawnMagazines[] = {
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnWeapons[] = {
			"SAF_AK6_khk_R",
			"Binocular",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weapons[] = {
			"SAF_AK6_khk_R",
			"Binocular",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
	};
	class SAF_M90_Soldier_MG: SAF_M90_Soldier_base
	{
		cost = 125000;
		displayName = "Machinegunner";
		icon = "iconManMG";
		linkedItems[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoogles_INDEP"
		};
		magazines[] = {
			"200Rnd_556x45_Box_Tracer_Red_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		nameSound = "veh_infantry_MG_s";
		respawnLinkedItem[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoogles_INDEP"
		};
		respawnMagazines[] = {
			"200Rnd_556x45_Box_Tracer_Red_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnWeapons[] = {
			"SAF_KSP90C_MG",
			"Binocular",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
		role = "MachineGunner";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		textPlural = "machinegunners";
		textSingular = "machinegunner";
		threat[] = {1,0.1,0.3};
		weapons[] = {
			"SAF_KSP90C_MG",
			"Binocular",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
	};
	class SAF_M90_Soldier_MA: SAF_M90_Soldier_base
	{
		cost = 150000;
		displayName = "Marksman";
		linkedItems[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoogles_INDEP"
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
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnLinkedItem[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoogles_INDEP"
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
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnWeapons[] = {
			"SAF_AK6B_khk_MA",
			"Rangefinder",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
		role = "Marksman";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		textPlural = "marksmen";
		textSingular = "marksman";
		weapons[] = {
			"SAF_AK6B_khk_MA",
			"Rangefinder",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
	};
	class SAF_M90_Soldier_ME: SAF_M90_Soldier_base
	{
		attendant = 1;
		backpack = "SAF_M90_Kitbag_base";
		class eventHandlers {
			init = "(_this select 0) execVM '\saf2035_m90\scripts\medicbags.sqf';";
		};
		cost = 300000;
		displayName = "Medic";
		icon = "iconManMedic";
		linkedItems[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		magazines[] = {
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		picture = "pictureHeal";
		respawnLinkedItems[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		respawnMagazines[] = {
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnWeapons[] = {
			"SAF_AK6_khk_R",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
		role = "CombatLifeSaver";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		textPlural = "medics";
		textSingular = "medic";
		weapons[] = {
			"SAF_AK6_khk_R",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
	};
	class SAF_M90_Soldier_TL: SAF_M90_Soldier_base
	{
		backpack = "SAF_M90_Kitbag_base";
		cost=600000;
		displayName="Team Leader";
		icon="iconManOfficer";
		linkedItems[]=
		{
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"HandGrenade",
			"HandGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		nameSound="veh_infantry_officer_s";
		respawnLinkedItems[]=
		{
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"HandGrenade",
			"HandGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnWeapons[]=
		{
			"SAF_AK6GL_khk_TL",
			"hgun_P07_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		textPlural="officers";
		textSingular="officer";
		weapons[]=
		{
			"SAF_AK6GL_khk_TL",
			"hgun_P07_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
	};
	class SAF_M90_Soldier_AT: SAF_M90_Soldier_base
	{
		cost = 180000;
		displayName = "Rifleman (AT)";
		icon = "iconManAT";
		linkedItems[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		magazines[] = {
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"NLAW_F",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		nameSound = "veh_infantry_AT_s";
		respawnLinkedItems[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		respawnMagazines[] = {
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"NLAW_F",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnWeapons[] = {
			"SAF_AK6_khk_R",
			"launch_NLAW_F",
			"Binocular",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
		role = "MissileSpecialist";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		secondaryAmmoCoef = 0.5;
		textPlural = "AT soldiers";
		textSingular = "AT soldier";
		threat[] = {1,0.69999999,0.30000001};
		weapons[] = {
			"SAF_AK6_khk_R",
			"SAF_Rb57",
			"Binocular",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
	};
	class SAF_M90_Soldier_Exp: SAF_M90_Soldier_base
	{
		backpack = "SAF_M90_Kitbag_base";
		canDeactivateMines = 1;
		cost = 115000;
		detectSkill = 80;
		displayName = "Explosive Specialist";
		class eventHandlers {
			init = "(_this select 0) execVM '\saf2035_m90\scripts\expbags.sqf';";
		};
		icon = "iconManExplosive";
		linkedItems[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		magazines[] = {
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		picture = "pictureExplosive";
		respawnLinkedItems[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		respawnMagazines[] = {
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnWeapons[] = {
			"SAF_AK6_khk_R",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
		role = "Sapper";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		threat[] = {1,0.5,0.1};
		weapons[] = {
			"SAF_AK6_khk_R",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
	};
	class SAF_M90_Soldier_AMG: SAF_M90_Soldier_base
	{
		backpack = "SAF_M90_Kitbag_AMG";
		cost = 95000;
		displayName = "Ass. Machinegunner";
		linkedItems[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		magazines[] = {
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnLinkedItems[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		respawnMagazines[] = {
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnWeapons[] = {
			"SAF_AK6_khk_R",
			"Binocular",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weapons[] = {
			"SAF_AK6_khk_R",
			"Binocular",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
	};
	class SAF_M90_Soldier_MS: SAF_M90_Soldier_base
	{
		cost = 180000;
		displayName = "Missile Specialist";
		icon = "iconManAT";
		linkedItems[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		magazines[] = {
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"Titan_AT",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		nameSound = "veh_infantry_AT_s";
		respawnLinkedItems[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		respawnMagazines[] = {
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"Titan_AT",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnWeapons[] = {
			"SAF_AK6_khk_R",
			"SAF_Rb35_Grn",
			"Binocular",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
		role = "MissileSpecialist";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		secondaryAmmoCoef = 0.5;
		textPlural = "AT soldiers";
		textSingular = "AT soldier";
		threat[] = {1,0.69999999,0.30000001};
		weapons[] = {
			"SAF_AK6_khk_R",
			"SAF_Rb35_Grn",
			"Binocular",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
	};
	class SAF_M90_Soldier_AMS: SAF_M90_Soldier_base
	{
		backpack = "SAF_M90_Kitbag_AMS";
		cost = 95000;
		displayName = "Ass. Missile Specialist";
		linkedItems[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		magazines[] = {
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnLinkedItems[] = {
			"SAF_M90_PC",
			"SAF_M90_Helmet_ECH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		respawnMagazines[] = {
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnWeapons[] = {
			"SAF_AK6_khk_R",
			"Binocular",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weapons[] = {
			"SAF_AK6_khk_R",
			"Binocular",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
	};
	//Sniper Team config
	class SAF_M90_Sniper: SAF_M90_Sniper_base
	{
		backpack = "SAF_M90_Kitbag_base";
		displayName = "Sniper (M90)";
		icon = "iconManRecon";
		linkedItems[] = {
			"SAF_M90_PC_lite",
			"SAF_M90_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		magazines[] = {
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
		};
		respawnLinkedItem[] = {
			"SAF_M90_PC_lite",
			"SAF_M90_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		respawnMagazines[] = {
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
		};
		respawnWeapons[] = {
			"SAF_PSG25_SS",
			"hgun_P07_F",
			"Rangefinder",
			"Throw",
			"Put"
		};
		role = "Marksman";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		threat[] = {1,0.1,0.3};
		weapons[] = {
			"SAF_PSG25_SS",
			"hgun_P07_F",
			"Rangefinder",
			"Throw",
			"Put"
		};
	};
	class SAF_M90L_Sniper: SAF_M90L_Sniper_base
	{
		backpack = "SAF_M90_Kitbag_base";
		displayName = "Sniper (M90L)";
		icon = "iconManRecon";
		linkedItems[] = {
			"SAF_M90_PC_lite",
			"SAF_M90_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_tna_F"
		};
		magazines[] = {
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
		};
		respawnLinkedItem[] = {
			"SAF_M90_PC_lite",
			"SAF_M90_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_tna_F"
		};
		respawnMagazines[] = {
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
		};
		respawnWeapons[] = {
			"SAF_PSG25_SS",
			"hgun_P07_F",
			"Rangefinder",
			"Throw",
			"Put"
		};
		role = "Marksman";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		threat[] = {1,0.1,0.3};
		weapons[] = {
			"SAF_PSG25_SS",
			"hgun_P07_F",
			"Rangefinder",
			"Throw",
			"Put"
		};
	};
	class SAF_M90_Spotter: SAF_M90_Sniper_base
	{
		backpack = "SAF_M90_Kitbag_base";
		displayName = "Spotter (M90)";
		icon = "iconManRecon";
		linkedItems[] = {
			"SAF_M90_PC_lite",
			"SAF_M90_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		magazines[] =
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"Laserbatteries"
		};
		respawnLinkedItems[] =
		{
			"SAF_M90_PC_lite",
			"SAF_M90_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_INDEP"
		};
		respawnMagazines[] =
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"Laserbatteries"
		};
		respawnWeapons[] =
		{
			"SAF_AK6GL_khk_SP",
			"hgun_P07_F",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		role = "Marksman";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		threat[] = {1,0.1,0.30000001};
		weapons[] =
		{
			"SAF_AK6GL_khk_SP",
			"hgun_P07_F",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
	};
	class SAF_M90L_Spotter: SAF_M90L_Sniper_base
	{
		backpack = "SAF_M90_Kitbag_base";
		displayName = "Spotter (M90L)";
		icon = "iconManRecon";
		linkedItems[] = {
			"SAF_M90_PC_lite",
			"SAF_M90_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_tna_F"
		};
		magazines[] =
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"Laserbatteries"
		};
		respawnLinkedItems[] =
		{
			"SAF_M90_PC_lite",
			"SAF_M90_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles_tna_F"
		};
		respawnMagazines[] =
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"Laserbatteries"
		};
		respawnWeapons[] =
		{
			"SAF_AK6GL_khk_SP",
			"hgun_P07_F",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		role = "Marksman";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		threat[] = {1,0.1,0.30000001};
		weapons[] =
		{
			"SAF_AK6GL_khk_SP",
			"hgun_P07_F",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
	};
	//Base Backpack
	class B_Kitbag_Base;
	class B_AssaultPack_Base;
	class SAF_M90_Kitbag_base: B_Kitbag_Base
	{
		author = "Kimukun";
		baseBackpack = "SAF_M90_Kitbag_base";
		displayName = "M90 Kitbag";
		dlc = "SAF2035_Mod";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\saf2035_m90\data\backpack\m90_kitbag.paa"};
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_b_c_kitbag_rgr.paa";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
	};
	//Backpack-Loadouts
		class SAF_M90_Kitbag_MS: SAF_M90_Kitbag_base
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine="Titan_AT";
				count=3;
			};
		};
	};
	class SAF_M90_Kitbag_AMG: SAF_M90_Kitbag_base
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		class TransportMagazines
		{
			class _xx_200Rnd_556x45_Box_Tracer_Red_F
			{
				magazine="200Rnd_556x45_Box_Tracer_Red_F";
				count=4;
			};
		};
	};
	class SAF_M90_Kitbag_AMS: SAF_M90_Kitbag_base
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
		};
	};
};
class cfgWeapons
{
	//Base Uniforms
	class UniformItem;
	class Uniform_Base;
	class SAF_M90_Uniform: Uniform_Base
	{
		author = "Kimukun";
		scope = 2;
		displayName = "M90 Uniform";
		dlc = "SAF2035_Mod";
		picture = "\saf2035_m90\data\ui\uniform_m90_icon.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\saf2035_m90\data\uniform\m90_uniform.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "SAF_M90_Soldier_base";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class SAF_M90_Sniper_FullGhillie: Uniform_Base
	{
		author = "Kimukun";
		displayName = "Full Ghillie (M90)";
		dlc = "SAF2035_Mod";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_u_i_fullghillie_lsh_ca.paa";
		scope = 2;
		class ItemInfo: UniformItem
		{
			containerClass = "Supply60";
			mass = 80;
			uniformClass = "SAF_M90_Sniper_base";
		};
	};
	class SAF_M90L_Sniper_FullGhillie: Uniform_Base
	{
		author = "Kimukun";
		displayName = "Full Ghillie (M90L)";
		dlc = "SAF2035_Mod";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		picture = "\A3\characters_f_exp\data\ui\icon_U_B_FullGhillie_tna_ca.paa";
		scope = 2;
		class ItemInfo: UniformItem
		{
			containerClass = "Supply60";
			mass = 80;
			uniformClass = "SAF_M90L_Sniper_base";
		};
	};
	//Vests
	class VestItem;
	class V_PlateCarrier1_rgr;
	class V_PlateCarrier2_rgr;
	class SAF_M90_PC: V_PlateCarrier1_rgr
	{
		author = "Kimukun";
		displayName = "M90 Platecarrier";
		dlc = "SAF2035_Mod";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\saf2035_m90\data\vest\m90_vest.paa"};
		class ItemInfo: VestItem
		{
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
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor = 20;
					hitpointName = "HitAbdomen";
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
				class Chest
				{
					armor = 20;
					HitpointName = "HitChest";
					passThrough = 0.2;
				};
				class Diaphragm
				{
					armor = 20;
					HitpointName = "HitDiaphragm";
					passThrough = 0.30000001;
				};
			};
		};
	};
	class SAF_M90_PC_lite: V_PlateCarrier1_rgr
	{
		author = "Kimukun";
		displayName = "M90 Platecarrier Lite";
		dlc = "SAF2035_Mod";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\saf2035_m90\data\vest\m90_vest.paa"};
		class ItemInfo: VestItem
		{
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
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor = 20;
					hitpointName = "HitAbdomen";
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
				class Chest
				{
					armor = 20;
					HitpointName = "HitChest";
					passThrough = 0.2;
				};
				class Diaphragm
				{
					armor = 20;
					HitpointName = "HitDiaphragm";
					passThrough = 0.30000001;
				};
			};
		};
	};
	class SAF_M90_PC_spec: V_PlateCarrier1_rgr
	{
		author = "Kimukun";
		displayName = "M90 Platecarrier Special";
		dlc = "SAF2035_Mod";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\saf2035_m90\data\vest\m90_vest.paa"};
		class ItemInfo: VestItem
		{
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
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor = 20;
					hitpointName = "HitAbdomen";
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
				class Chest
				{
					armor = 20;
					HitpointName = "HitChest";
					passThrough = 0.2;
				};
				class Diaphragm
				{
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
	class SAF_M90_Helmet_ECH: H_HelmetB
	{
		author = "Kimukun";
		displayName = "M90 ECH";
		dlc = "SAF2035_Mod";
		picture = "\saf2035_m90\data\ui\echM90.paa";
		model = "A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\saf2035_m90\data\headgear\m90_helmet.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class SAF_M90_Helmet_ECH_lite: H_HelmetB
	{
		author = "Kimukun";
		displayName = "M90 ECH Lite";
		dlc = "SAF2035_Mod";
		picture = "\saf2035_m90\data\ui\echM90.paa";
		model = "A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\saf2035_m90\data\headgear\m90_helmet.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class SAF_M90_Boonie: H_HelmetB
	{
		author = "Kimukun";
		displayName = "M90 Boonie";
		dlc = "SAF2035_Mod";
		picture = "\saf2035_m90\data\ui\boonieM90.paa";
		model = "A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\saf2035_m90\data\headgear\m90_boonie.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
};
class cfgGroups
{
	class West
	{
		class SAF
		{
			name = "Swedish Armed Forces 2035";
			class M90_Infantry
			{
				name = "Infantry (M90)";
				class SAF_M90_InfSquad
				{
					name = "Rifle Squad";
					faction = "SAF";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = 1;
					class Unit0
					{
						side=1;
						vehicle="SAF_M90_Soldier_TL";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="SAF_M90_Soldier_R";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="SAF_M90_Soldier_ME";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="SAF_M90_Soldier_R";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="SAF_M90_Soldier_AT";
						rank="SERGEANT";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="SAF_M90_Soldier_MA";
						rank="CORPORAL";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=1;
						vehicle="SAF_M90_Soldier_MG";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=1;
						vehicle="SAF_M90_Soldier_AMG";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};
				class SAF_M90_FireTeam
				{
					name = "Fire Team";
					faction = "SAF";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = 1;
					class Unit0
					{
						side=1;
						vehicle="SAF_M90_Soldier_TL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="SAF_M90_Soldier_R";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="SAF_M90_Soldier_AT";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="SAF_M90_Soldier_MG";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class SAF_M90_ATTeam
				{
					name = "Anti-Armor Team";
					faction = "SAF";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = 1;
					class Unit0
					{
						side=1;
						vehicle="SAF_M90_Soldier_TL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="SAF_M90_Soldier_MS";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="SAF_M90_Soldier_MS";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="SAF_M90_Soldier_AMS";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class SAF_M90_FirSupTeam
				{
					name = "Fire Support Team";
					faction = "SAF";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = 1;
					class Unit0
					{
						side=1;
						vehicle="SAF_M90_Soldier_TL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="SAF_M90_Soldier_MG";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="SAF_M90_Soldier_MG";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="SAF_M90_Soldier_AMG";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class SAF_M90_AssSquad
				{
					name = "Assault Squad";
					faction = "SAF";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = 1;
					class Unit0
					{
						side=1;
						vehicle="SAF_M90_Soldier_TL";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="SAF_M90_Soldier_R";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="SAF_M90_Soldier_ME";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="SAF_M90_Soldier_MG";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="SAF_M90_Soldier_R";
						rank="SERGEANT";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="SAF_M90_Soldier_AT";
						rank="CORPORAL";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=1;
						vehicle="SAF_M90_Soldier_MG";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=1;
						vehicle="SAF_M90_Soldier_AMG";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};
			};
			class SAF_SniperTeam
			{
				name = "Sniper Teams";
				class SAF_M90_SniperTeam
				{
					name = "Sniper Team (M90)";
					faction = "SAF";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = 1;
					class Unit0
					{
						side=1;
						vehicle="SAF_M90_Sniper";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="SAF_M90_Spotter";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
				class SAF_M90L_SniperTeam
				{
					name = "Sniper Team (M90L)";
					faction = "SAF";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = 1;
					class Unit0
					{
						side=1;
						vehicle="SAF_M90L_Sniper";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="SAF_M90L_Spotter";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
			};
		};
	};
};
