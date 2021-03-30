#include "Character.hpp"

Character::Character(std::string const &name)
	: _name(name), _ap(40), _weapon(NULL)
{
	return;
}

Character::~Character(void)
{
	return;
}

Character::Character(Character const &c)
{
	*this = c;
}

Character		&Character::operator=(Character const &c)
{
	if (this == &c)
		return (*this);
	this->_name = c.getName();
	this->_ap = c.getAp();
	this->_weapon = c.getWeapon();
	return (*this);
}

void			Character::recoverAp(void)
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void			Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void			Character::attack(Enemy *e)
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " don't have a weapon." << std::endl;
	else if (this->_weapon->getAPCost() > this->_ap)
		std::cout << this->_name << " has no AP, he can't attack." << std::endl;
	else
	{
		std::cout << this->_name << " attacks " << e->getType()
			<< " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		e->takeDamage(this->_weapon->getDamage());
		this->_ap -= this->_weapon->getAPCost();
		if (e->getHp() <= 0)
			delete e;
	}
}

std::string		Character::getName(void) const
{
	return (this->_name);
}

int				Character::getAp(void) const
{
	return (this->_ap);
}

AWeapon			*Character::getWeapon(void) const
{
	return (this->_weapon);
}

std::ostream	&operator<<(std::ostream &o, Character const &c)
{
	if (c.getWeapon() != NULL)
		o << c.getName() << " has " << c.getAp() 
			<< " AP and wields a " << c.getWeapon()->getName() << std::endl;
	else
		o <<c.getName() << " has " << c.getAp() << " AP and is unarmed"
			<< std::endl;
	return (o);
}