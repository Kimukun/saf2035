if (isServer) then {
	if (isClass (configFile >> "CfgPatches" >> "ace_medical")) then 
	{
		for "_i" from 1 to 10 do {_this addItemToBackpack "ACE_fieldDressing";};
		for "_i" from 1 to 10 do {_this addItemToBackpack "ACE_morphine";};
		for "_i" from 1 to 10 do {_this addItemToBackpack "ACE_epinephrine";};
		for "_i" from 1 to 10 do {_this addItemToBackpack "ACE_bloodIV_500";};
	} 
	else 
	{
		_this addItemToBackpack "Medikit";
		for "_i" from 1 to 25 do {_this addItemToBackpack "FirstAidKit";};
	};
};