if (isServer) then {
	if (isClass (configFile >> "CfgPatches" >> "ace_explosives")) then 
	{
		_this addItemToBackpack "ACE_M26_Clacker";
		_this addItemToBackpack "ACE_DefusalKit";
		_this addItemToBackpack "MineDetector";
		for "_i" from 1 to 8 do {_this addItemToBackpack "DemoCharge_Remote_Mag";};
	} 
	else
	{
		_this addItemToBackpack "ToolKit";
		_this addItemToBackpack "MineDetector";
		for "_i" from 1 to 8 do {_this addItemToBackpack "DemoCharge_Remote_Mag";};
	};
};