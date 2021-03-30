#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
	: _hp(hp), _type(type)
{
	return;
}

Enemy::~Enemy(void)
{
	return;
}

Enemy::Enemy(Enemy const &e)
{
	*this = e;
}

Enemy		&Enemy::operator=(Enemy const &e)
{
	if (this == &e)
		return (*this);
	this->_hp = e.getHp();
	this->_type = e.getType();
	return (*this);
}

int			Enemy::getHp(void) const
{
	return (this->_hp);
}

std::string	Enemy::getType(void) const
{
	return (this->_type);
}

void		Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	else if ((this->_hp - damage) >= 0)
		this->_hp -= damage;
	else
		this->_hp = 0;
}