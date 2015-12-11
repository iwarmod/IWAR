if (isServer) then {

	waitUntil {!isNull _this};

};	
_magazines = magazines _this;
_items = items _this; // Medkits, ToolKits etc.
_assitems = assignedItems _this; // NVG's, GPS etc.

//Removeuniform _this;
Removevest _this;
removeAllItems _this;

//_uniform = (ceil (random 3));

//switch (_uniform ) do 
//{

//	case 1: {
//		_this adduniform "aif_uni_jacket";
//		};
//	case 2: {
//		_this adduniform "aif_uni_jacket2";
//		};
//	case 3: {
//		_this adduniform "aif_uni_officer_wood";
//		};

//};

//------------ Body Armour ------------

_armour = (ceil (random 2));

switch (_armour ) do 
{
	case 1: {
		_this addvest "aif_uni_vest";
		};
	case 2: {
		_this addvest "aif_uni_vest2";
		};
};

Removeheadgear _this;

//------------ Helmet/Hat ------------

_hat = (ceil (random 6));

switch (_hat ) do 
{
	case 1: {
		_this addheadgear "H_Cap_blk";
		};
	case 2: {
		_this addHeadgear "H_Watchcap_khk";
		};
	case 3: {
		_this addheadgear "H_ShemagOpen_khk";
		};

	case 4: {    _this addheadgear "H_ShemagOpen_tan";
                                        };

	case 5: {    _this addheadgear "H_Cap_brn_SPECOPS";
                                        };

	case 6: {    _this addheadgear "H_Bandanna_gry";
                                        };

};

 Removegoggles _this;

//---------- Eyewear --------------------|

_eyewear = (ceil (random 10));

switch (_eyewear ) do 
{
	case 1: {};
	case 2: {
		_this addGoggles "G_Balaclava_blk";
		};
	case 2: {
		_this addGoggles "SFG_Tac_BeardD";
		};
	case 3: {
		_this addGoggles "SFG_Tac_BeardB";
		};
	case 4: {
		_this addGoggles "SFG_Tac_BeardG";
		};
	case 5: {
		_this addGoggles "SFG_Tac_BeardO";
		};
	case 6: {
		_this addGoggles "SFG_Tac_smallBeardD";
		};
	case 7: {
		_this addGoggles "SFG_Tac_smallBeardB";
		};
	case 8: {
		_this addGoggles "SFG_Tac_smallBeardG";
		};
	case 9: {
		_this addGoggles "SFG_Tac_smallBeardO";
		};

};

{_this addItem _x} forEach _items;
{_this addMagazine _x} forEach _magazines;
{_this addItem _x} forEach _assitems;
{_this assignItem _x} forEach _assitems;