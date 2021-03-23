#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
	: AWeapon("Plasma Rifle", 5, 21)
{
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &p)
	: AWeapon(p)
{
	return;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return;
}

PlasmaRifle		&PlasmaRifle::operator=(PlasmaRifle const &p)
{
	this->_name = p._name;
	this->_damage = p._damage;
	this->_costap = p._costap;
	return (*this);
}

void			PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return;
}