#ifndef SWORD_HPP
# define SWORD_HPP

# include <iostream>
# include "AWeapon.hpp"

class Sword : public AWeapon
{
private:
	/* data */
public:
	Sword(void);
	virtual ~Sword(void);
	Sword(Sword const &p);
	Sword		    &operator=(Sword const &p);
	virtual void	attack(void) const;
};

#endif