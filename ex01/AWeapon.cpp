#include "AWeapon.hpp"

AWeapon::AWeapon(void)
	: _name("No Name"), _damage(0), _costap(0)
{
	return;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
	: _name(name), _damage(damage), _costap(apcost)
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
	this->_name = w._name;
	this->_costap = w._costap;
	this->_damage = w._damage;
	return (*this);
}

std::string		AWeapon::getName(void) const
{
	return (this->_name);
}

int				AWeapon::getAPCost(void) const
{
	return (this->_costap);
}

int				AWeapon::getDamage(void) const
{
	return (this->_damage);
}