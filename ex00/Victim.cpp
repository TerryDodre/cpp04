#include "Victim.hpp"

Victim::Victim(std::string name)
	: _name(name)
{
	std::cout << "Some random victim called " << _name 
		<< " just appeared!" << std::endl;
	return;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name 
		<< " just died for no apparent reason!" << std::endl;
	return;
}

std::ostream	&operator<<(std::ostream &o, Victim const &v)
{
	o << "I am " << v.get_name() << " and I like otters!" << std::endl;
	return (o);
}

std::string		Victim::get_name(void) const
{
	return (_name);
}

void			Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}