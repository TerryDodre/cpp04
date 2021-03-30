#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon(void);
public:
	Peon(std::string name);
	virtual ~Peon(void);
	Peon(Peon const &p);
	Peon			&operator=(Peon const &p);
	virtual void	getPolymorphed(void) const;
};

#endif