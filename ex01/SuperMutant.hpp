#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"
# include <iostream>

class SuperMutant : public Enemy
{
private:
	/* data */
public:
	SuperMutant(void);
	virtual ~SuperMutant(void);
	SuperMutant(SuperMutant const &s);
	virtual SuperMutant	&operator=(SuperMutant const &s);
	virtual void 		takeDamage(int damage);
};

#endif