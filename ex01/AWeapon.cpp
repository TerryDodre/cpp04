#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int damage, int apcost)
	: _name(name), _damage(damage), _apcost(apcost)
{
	return;
}

AWeapon::~AWeapon(void)
{
	return;
}

AWeapon::AWeapon(AWeapon const &w)
{
	*this = w;
}

AWeapon			&AWeapon::operator=(AWeapon const &w)
{
	if (this == &w)
		return (*this);
	this->_name = w._name;
	this->_apcost = w._apcost;
	this->_damage = w._damage;
	return (*this);
}

std::string		AWeapon::getName(void) const
{
	return (this->_name);
}

int				AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}

int				AWeapon::getDamage(void) const
{
	return (this->_damage);
}