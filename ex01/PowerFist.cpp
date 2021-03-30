#include "PowerFist.hpp"

PowerFist::PowerFist(void)
	: AWeapon("Power Fist", 50, 8)
{
	return;
}

PowerFist::~PowerFist(void)
{
	return;
}

PowerFist::PowerFist(PowerFist const &p)
	: AWeapon(p)
{
	return;
}

PowerFist		&PowerFist::operator=(PowerFist const &p)
{
	if (this == &p)
		return (*this);
	AWeapon::operator=(p);
	return (*this);
}

void			PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM *" << std::endl;
	return;
}