if (isServer) then {
	_this animate ["HideBumper2", 0];	
	_this animate ["HideBackpacks", 1];
	_this animate ["HideConstruction",1];
	_this animate ["HidePolice", 1];
	_this animate ["Hidedoor1", 0];
	_this animate ["Hidedoor2", 0];
	_this animate ["Hidedoor3", 0];
	_this animate ["Hideglass2", 0];
                    _this addBackpackCargoGlobal ["B_Mortar_01_support_F",1];
                    _this addBackpackCargoGlobal ["B_Mortar_01_weapon_F",1];
                    _this addBackpackCargoGlobal ["O_HMG_01_support_F",1];
                    _this addBackpackCargoGlobal ["I_AT_01_weapon_F",1];
                    _this addItemCargoGlobal ["ToolKit",1];
                    _this addBackpackCargoGlobal ["O_UAV_01_backpack_F",1];
                    _this addMagazineCargoGlobal ["rhs_VOG25",5];
                    _this addMagazineCargoGlobal ["rhs_10Rnd_762x54mmR_7N1",5];
                    _this addMagazineCargoGlobal ["rhs_30Rnd_762x39mm",5];
                    _this addMagazineCargoGlobal ["rhs_100Rnd_762x54mmR",5];
                    _this addMagazineCargoGlobal ["rhs_mag_30Rnd_556x45_Mk318_Stanag",5];
};