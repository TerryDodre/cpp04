#include "Ice.hpp"

Ice::Ice(void)
	: AMateria("ice")
{
	return ;
}

Ice::~Ice(void)
{
	return;
}

Ice::Ice(const Ice &i)
	: AMateria(i)
{
}

Ice			&Ice::operator=(const Ice &i)
{
	if (this == &i)
		return (*this);
	AMateria::operator=(i);
	return (*this);
}

AMateria	*Ice::clone(void) const
{
    AMateria *cpy = new Ice;
    return (cpy);
}

void		Ice::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName()
		<< " *" << std::endl;
}
