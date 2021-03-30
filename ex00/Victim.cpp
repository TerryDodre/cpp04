#include "Victim.hpp"

Victim::Victim(std::string name)
	: _name(name)
{
	std::cout << "Some random victim called " << this->_name 
		<< " just appeared!" << std::endl;
	return;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name 
		<< " just died for no apparent reason!" << std::endl;
	return;
}

Victim::Victim(Victim const &v)
{
	*this = v;
}

Victim			&Victim::operator=(Victim const &v)
{
	if (this == &v)
		return (*this);
	this->_name = v._name;
	return (*this);
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
	std::cout << _name << " has been turned into a cute little sheep!"
		<< std::endl;
}
