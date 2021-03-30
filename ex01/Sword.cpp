#include "Sword.hpp"

Sword::Sword(void)
	: AWeapon("Sword", 50, 8)
{
	return;
}

Sword::~Sword(void)
{
	return;
}

Sword::Sword(Sword const &p)
	: AWeapon(p)
{
	return;
}

Sword		&Sword::operator=(Sword const &p)
{
	if (this == &p)
		return (*this);
	AWeapon::operator=(p);
	return (*this);
}

void			Sword::attack(void) const
{
	std::cout << "* Cliiing *" << std::endl;
	return;
}