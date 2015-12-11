if (isServer) then {
	
_auto setObjectTexture [1, "aif_all\data\aif_suv.paa"];
sleep 0.1;
                    _this addBackpackCargoGlobal ["B_Mortar_01_support_F",1];
                    _this addBackpackCargoGlobal ["B_Mortar_01_weapon_F",1];
                    _this addBackpackCargoGlobal ["O_HMG_01_support_F",1];
                    _this addBackpackCargoGlobal ["I_AT_01_weapon_F",1];
                    _this addItemCargoGlobal ["ToolKit",1];
                    _this addBackpackCargoGlobal ["O_UAV_01_backpack_F",1];
                    _this addMagazineCargoGlobal ["rhs_rpg7_PG7VL_mag",3];
                    _this addMagazineCargoGlobal ["rhs_30Rnd_762x39mm",5];
                    _this addMagazineCargoGlobal ["rhs_10Rnd_762x54mmR_7N1",5];
                    _this addMagazineCargoGlobal ["rhs_100Rnd_762x54mmR",5];
                    _this addMagazineCargoGlobal ["16Rnd_9x21_Mag",5];

};