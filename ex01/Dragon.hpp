#ifndef DRAGON_HPP
# define DRAGON_HPP

# include "Enemy.hpp"
# include <iostream>

class Dragon : public Enemy
{
private:
	/* data */
public:
	Dragon(void);
	Dragon(Dragon const &s);
	virtual ~Dragon(void);
	virtual Dragon	&operator=(Dragon const &s);
	virtual void 	takeDamage(int damage);
};

#endif