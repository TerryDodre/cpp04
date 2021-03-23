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

void			Random::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a green cow!" << std::endl;
}