#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
private:
	/* data */
public:
	Peon(std::string name);
	virtual ~Peon(void);
	virtual void	getPolymorphed(void) const;
};

#endif