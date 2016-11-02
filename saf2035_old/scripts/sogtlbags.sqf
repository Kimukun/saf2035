if (isServer) then {
	if (isClass (configFile >> "CfgPatches" >> "ace_main")) then 
	{
		_this addItemToBackpack "ACE_HuntIR_monitor";
		for "_i" from 1 to 4 do {_this addItemToBackpack "ACE_HuntIR_M203";};
	};
};