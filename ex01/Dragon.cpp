#include "Dragon.hpp"

Dragon::Dragon(void)
	: Enemy(170, "Dragon")
{
	std::cout << "Roah, Roaaar, Raaah!" << std::endl;
	return;
}

Dragon::~Dragon(void)
{
	std::cout << "Oooorgh..." << std::endl;
	return;
}

Dragon::Dragon(Dragon const &s)
	: Enemy(s.getHp(), s.getType())
{
	*this = s;
}

Dragon		&Dragon::operator=(Dragon const &s)
{
	if (this == &s)
		return (*this);
	Enemy::operator=(s);
	return (*this);
}

void			Dragon::takeDamage(int damage)
{
	damage -= 3;
	if (damage < 0)
		return ;
	else if ((this->_hp - damage) >= 0)
		this->_hp -= damage;
	else
		this->_hp = 0;
}