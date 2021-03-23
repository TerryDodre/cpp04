#include "PowerFist.hpp"

PowerFist::PowerFist(void)
	: AWeapon("Power Fist", 8, 50)
{
	return;
}

PowerFist::PowerFist(PowerFist const &p)
	: AWeapon(p)
{
	return;
}

PowerFist::~PowerFist(void)
{
	return;
}

PowerFist		&PowerFist::operator=(PowerFist const &p)
{
	this->_name = p._name;
	this->_damage = p._damage;
	this->_costap = p._costap;
	return (*this);
}

void			PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM *" << std::endl;
	return;
}