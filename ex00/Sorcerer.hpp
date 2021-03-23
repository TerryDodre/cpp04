#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string _name;
	std::string _title;
	Sorcerer(void);
public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer(void);
	Sorcerer(Sorcerer const &s);
	Sorcerer	&operator=(Sorcerer const &s);
	std::string	get_name() const;
	std::string	get_title() const;
	void		polymorph(Victim const &v) const;
};

std::ostream	&operator<<(std::ostream &o, Sorcerer const &s);
#endif