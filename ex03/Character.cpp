#include "Character.hpp"

Character::Character(std::string name)
	: _name(name)
{
    this->_inv[0] = NULL;
    this->_inv[1] = NULL;
    this->_inv[2] = NULL;
    this->_inv[3] = NULL;
	return;
}

Character::~Character(void)
{
	if (this->_inv[0])
		delete _inv[0];
	if (this->_inv[1])
		delete _inv[1];
	if (this->_inv[2])
		delete _inv[2];
	if (this->_inv[3])
		delete _inv[3];
	return;
}

Character::Character(const Character &c)
{
	*this = c;
}

Character			&Character::operator=(const Character &c)
{
	if (this == &c)
		return (*this);
	if (this->_inv[0])
		delete _inv[0];
	if (this->_inv[1])
		delete _inv[1];
	if (this->_inv[2])
		delete _inv[2];
	if (this->_inv[3])
		delete _inv[3];
	this->_name = c._name;
	this->_inv[0] = c._inv[0];
	this->_inv[1] = c._inv[1];
	this->_inv[2] = c._inv[2];
	this->_inv[3] = c._inv[3];
	return (*this);
}

std::string	const 	&Character::getName(void) const
{
	return (this->_name);
}

void				Character::equip(AMateria *m)
{
	int		i = 0;

	while (i < 4 && this->_inv[i] != NULL)
		i++;
	if (i < 4)
		this->_inv[i] = m;
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inv[idx] = NULL;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4)
		this->_inv[idx]->use(target);
}
