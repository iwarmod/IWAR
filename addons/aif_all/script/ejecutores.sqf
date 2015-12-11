if (isServer) then {

	waitUntil {!isNull _this};

};	
_magazines = magazines _this;
_items = items _this; // Medkits, ToolKits etc.
_assitems = assignedItems _this; // NVG's, GPS etc.

Removeuniform _this;
Removevest _this;
removeAllItems _this;

_uniform = (ceil (random 4));

switch (_uniform ) do 
{
	case 1: {
		_this adduniform "aif_uni_dig_g";
		};
	case 2: {
		_this adduniform "aif_uni_tig_g";
		};
	case 3: {
		_this adduniform "aif_uni_dig_g2";
		};
	case 4: {
		_this adduniform "aif_uni_tig_g2";
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

 Removegoggles _this;

//---------- Eyewear --------------------|

_eyewear = (ceil (random 1));

switch (_eyewear ) do 
{
	case 1: {
		_this addGoggles "G_Balaclava_blk";
		};

};

{_this addItem _x} forEach _items;
{_this addMagazine _x} forEach _magazines;
{_this addItem _x} forEach _assitems;
{_this assignItem _x} forEach _assitems;