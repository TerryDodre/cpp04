#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
protected:
	std::string	_name;
	Victim(void);
public:
	Victim(std::string name);
	virtual ~Victim(void);
	Victim(Victim const &v);
	Victim			&operator=(Victim const &v);
	std::string		get_name(void) const;
	virtual void	getPolymorphed(void) const;
};

std::ostream	&operator<<(std::ostream &o, Victim const &v);
#endif
