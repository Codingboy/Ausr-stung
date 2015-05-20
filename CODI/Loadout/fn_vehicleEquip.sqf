private["_veh","_clear","_magazines","_weapons","_items","_backpacks","_thermal","_removeWeapons"];

_veh = _this select 0;
_clear = _this select 1;
_magazines = _this select 2;
_weapons = _this select 3;
_items = _this select 4;
_backpacks = _this select 5;
_thermal = _this select 6;
_removeWeapons = _this select 7;

if (_clear) then
{
	clearWeaponCargoGlobal _veh;
	clearBackpackCargoGlobal _veh;
	clearMagazineCargoGlobal _veh;
	clearItemCargoGlobal _veh;
};

if (!_thermal) then
{
	_veh disableTIEquipment true;
};

{
	_veh addMagazineCargoGlobal _x;
}
forEach _magazines;
{
	_veh addItemCargoGlobal _x;
}
forEach _items;
{
	_veh addWeaponCargoGlobal _x;
}
forEach _weapons;
{
	_veh addBackpackCargoGlobal _x;
}
forEach _backpacks;

{
	_veh removeWeaponGlobal _x;
}
forEach _removeWeapons;