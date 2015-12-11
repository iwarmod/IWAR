if (isServer) then {

	waitUntil {!isNull _this};

};	
_magazines = magazines _this;
_items = items _this; // Medkits, ToolKits etc.
_assitems = assignedItems _this; // NVG's, GPS etc.

Removeuniform _this;
Removevest _this;
removeAllItems _this;

_uniform = (ceil (random 9));

switch (_uniform ) do 
{
	case 1: {
		_this adduniform "aif_uni_dig_w";
		};
	case 2: {
		_this adduniform "aif_uni_tig_w";
		};
	case 3: {
		_this adduniform "aif_uni_wood_w";
		};
	case 4: {
		_this adduniform "aif_uni_wood_w2";
		};
	case 5: {
		_this adduniform "aif_uni_dig_des";
		};
	case 6: {
		_this adduniform "aif_uni_dig_des2";
		};
	case 7: {
		_this adduniform "aif_uni_tig_des";
		};

	case 8: {
		_this adduniform "aif_uni_tig_des2";
		};
	case 9: {
		_this adduniform "aif_uni_tig_des3";
		};

};

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

_hat = (ceil (random 3));

switch (_hat ) do 
{
	case 1: {};
	case 2: {
		_this addheadgear "rhs_tsh4";
		};
	case 3: {
		_this addHeadgear "rhs_tsh4_ess";
		};
};

 Removegoggles _this;

//---------- Eyewear --------------------|

_eyewear = (ceil (random 9));

switch (_eyewear ) do 
{
	case 1: {};
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