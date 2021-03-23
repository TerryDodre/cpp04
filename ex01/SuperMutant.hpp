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
	SuperMutant(SuperMutant const &s);
	virtual ~SuperMutant(void);
	virtual SuperMutant	&operator=(SuperMutant const &s);
	virtual void 		takeDamage(int damage);
};

#endif