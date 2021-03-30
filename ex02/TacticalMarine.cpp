#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
	return;
}

TacticalMarine::TacticalMarine(const TacticalMarine &t)
{
	*this = t;
}

TacticalMarine	&TacticalMarine::operator=(const TacticalMarine &t)
{
	(void) t;
	return (*this);
}

ISpaceMarine	*TacticalMarine::clone(void) const
{
	ISpaceMarine *cpy = new TacticalMarine();
	return (cpy);
}

void			TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void			TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}