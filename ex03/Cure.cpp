#include "Cure.hpp"

Cure::Cure(void)
	: AMateria("cure")
{
	return;
}

Cure::~Cure(void)
{
	return;
}

Cure::Cure(const Cure &c)
	: AMateria(c)
{
}

Cure		&Cure::operator=(const Cure &c)
{
	if (this == &c)
		return (*this);
	AMateria::operator=(c);
	return (*this);
}

AMateria	*Cure::clone(void) const
{
    AMateria *cpy = new Cure;
    return (cpy);
}

void		Cure::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
