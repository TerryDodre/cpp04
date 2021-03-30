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
	virtual ~RadScorpion(void);
	RadScorpion(RadScorpion const &s);
	virtual RadScorpion	&operator=(RadScorpion const &s);
};

#endif