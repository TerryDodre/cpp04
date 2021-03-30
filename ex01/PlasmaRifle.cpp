#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
	: AWeapon("Plasma Rifle", 21, 5)
{
	return;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &p)
	: AWeapon(p)
{
	return;
}

PlasmaRifle		&PlasmaRifle::operator=(PlasmaRifle const &p)
{
	if (this == &p)
		return (*this);
	AWeapon::operator=(p);
	return (*this);
}

void			PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return;
}