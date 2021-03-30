#include "Random.hpp"

Random::Random(std::string name)
	: Victim(name)
{
	std::cout << "Heu... Hello !?." << std::endl;
	return;
}

Random::~Random(void)
{
	std::cout << "Arggg..." << std::endl;
	return;
}

Random::Random(Random const &p)
	: Victim(p)
{
}

Random			&Random::operator=(Random const &p)
{
	if (this == &p)
		return (*this);
	Victim::operator=(p);
	return (*this);
}

void			Random::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a green cow!" << std::endl;
}