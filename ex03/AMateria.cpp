#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
	: _xp(0), _type(type)
{
	return;
}

AMateria::~AMateria(void)
{
	return;
}

AMateria::AMateria(const AMateria &m)
{
	*this = m;
}

AMateria		&AMateria::operator=(const AMateria &m)
{
	if (this == &m)
		return (*this);
	this->_xp = m._xp;
	return (*this);
}

std::string		const &AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int	AMateria::getXP(void) const
{
	return (this->_xp);
}

void			AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}
