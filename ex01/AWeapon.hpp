#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
protected:
	std::string		_name;
	int				_damage;
	int				_costap;
public:
	AWeapon(void);
	AWeapon(std::string const &name, int apcost, int damage);
	virtual ~AWeapon(void);
	AWeapon(AWeapon const &w);
	AWeapon			&operator=(AWeapon const &w);
	std::string		getName(void) const;
	int				getAPCost(void) const;
	int				getDamage(void) const;
	virtual void	attack(void) const = 0;
};

#endif