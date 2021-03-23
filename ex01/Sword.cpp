#include "Sword.hpp"

Sword::Sword(void)
	: AWeapon("Sword", 8, 50)
{
	return;
}

Sword::Sword(Sword const &p)
	: AWeapon(p)
{
	return;
}

Sword::~Sword(void)
{
	return;
}

Sword		&Sword::operator=(Sword const &p)
{
	this->_name = p._name;
	this->_damage = p._damage;
	this->_costap = p._costap;
	return (*this);
}

void			Sword::attack(void) const
{
	std::cout << "* Cliiing *" << std::endl;
	return;
}