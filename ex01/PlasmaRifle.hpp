#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
	/* data */
public:
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const &p);
	virtual ~PlasmaRifle(void);
	PlasmaRifle		&operator=(PlasmaRifle const &p);
	virtual void	attack(void) const;
};

#endif