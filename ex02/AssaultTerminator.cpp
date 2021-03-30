#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back..." << std::endl;
	return;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &t)
{
	*this = t;
}

AssaultTerminator	&AssaultTerminator::operator=(const AssaultTerminator &t)
{
	(void) t;
	return (*this);
}

ISpaceMarine	*AssaultTerminator::clone(void) const
{
	ISpaceMarine *cpy = new AssaultTerminator();
	return (cpy);
}

void			AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void			AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack(void) const
{
	std::cout <<"* attacks with chainfists *" << std::endl;
}