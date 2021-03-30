#include "Peon.hpp"

Peon::Peon(std::string name)
	: Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return;
}

Peon::Peon(Peon const &p)
	: Victim(p)
{
}

Peon			&Peon::operator=(Peon const &p)
{
	if (this == &p)
		return (*this);
	Victim::operator=(p);
	return (*this);
}

void			Peon::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}
