#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"
# include <iostream>

class RadScorpion : public Enemy
{
private:
	/* data */
public:
	RadScorpion(void);
	RadScorpion(RadScorpion const &s);
	virtual ~RadScorpion(void);
	virtual RadScorpion	&operator=(RadScorpion const &s);
};

#endif