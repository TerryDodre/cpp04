#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
	/* data */
public:
	PowerFist(void);
	PowerFist(PowerFist const &p);
	virtual ~PowerFist(void);
	PowerFist		&operator=(PowerFist const &p);
	virtual void	attack(void) const;
};

#endif