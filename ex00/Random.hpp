#ifndef RANDOM_HPP
# define RANDOM_HPP

# include <iostream>
# include "Victim.hpp"

class Random : public Victim
{
private:
	Random(void);
public:
	Random(std::string name);
	virtual ~Random(void);
	Random(Random const &r);
	Random			&operator=(Random const &r);
	virtual void	getPolymorphed(void) const;
};

#endif