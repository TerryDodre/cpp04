#ifndef RANDOM_HPP
# define RANDOM_HPP

# include <iostream>
# include "Victim.hpp"

class Random : public Victim
{
private:
	/* data */
public:
	Random(std::string name);
	virtual ~Random(void);
	virtual void	getPolymorphed(void) const;
};

#endif