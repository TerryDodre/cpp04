#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
	: _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
	return;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title 
		<< ", is dead. Consequences will never be the same!" << std::endl;
	return;
}

Sorcerer::Sorcerer(Sorcerer const &s)
{
	*this = s;
}

Sorcerer		&Sorcerer::operator=(Sorcerer const &s)
{
	_name = s._name;
	_title = s._title;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &s)
{
	o << "I am " << s.get_name() << ", " << s.get_title() 
		<< ", and I like ponies!" << std::endl;
	return (o);
}

std::string		Sorcerer::get_name(void) const
{
	return (_name);
}

std::string		Sorcerer::get_title(void) const
{
	return (_title);
}

void			Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}