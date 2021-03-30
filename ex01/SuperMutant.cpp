#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void)
	: Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant const &s)
	: Enemy(s.getHp(), s.getType())
{
	*this = s;
}

SuperMutant		&SuperMutant::operator=(SuperMutant const &s)
{
	if (this == &s)
		return (*this);
	Enemy::operator=(s);
	return (*this);
}

void			SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (damage < 0)
		return ;
	else if ((this->_hp - damage) >= 0)
		this->_hp -= damage;
	else
		this->_hp = 0;
}