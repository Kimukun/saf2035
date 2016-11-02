if (isServer) then {
	if (isClass (configFile >> "CfgPatches" >> "ace_explosives")) then 
	{
		_this addItemToBackpack "ACE_M26_Clacker";
		for "_i" from 1 to 4 do {_this addItemToBackpack "MiniGrenade";};
		for "_i" from 1 to 4 do {_this addItemToBackpack "Chemlight_green";};
		for "_i" from 1 to 5 do {_this addItemToBackpack "UGL_FlareWhite_F";};
		for "_i" from 1 to 4 do {_this addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
		for "_i" from 1 to 4 do {_this addItemToBackpack "1Rnd_SmokeOrange_Grenade_shell";};
		for "_i" from 1 to 4 do {_this addItemToBackpack "DemoCharge_Remote_Mag";};
	} 
	else
	{
		for "_i" from 1 to 4 do {_this addItemToBackpack "MiniGrenade";};
		for "_i" from 1 to 4 do {_this addItemToBackpack "Chemlight_green";};
		for "_i" from 1 to 5 do {_this addItemToBackpack "UGL_FlareWhite_F";};
		for "_i" from 1 to 4 do {_this addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
		for "_i" from 1 to 4 do {_this addItemToBackpack "1Rnd_SmokeOrange_Grenade_shell";};
		for "_i" from 1 to 4 do {_this addItemToBackpack "DemoCharge_Remote_Mag";};
	};
};