#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string	_name;
	int			_ap;
	AWeapon		*_weapon;
public:
	Character(void);
	Character(std::string const &name);
	~Character();
	Character(Character const &c);
	Character	&operator=(Character const &c);
	void		recoverAp(void);
	void		equip(AWeapon *w);
	void		attack(Enemy *e);
	std::string	getName(void) const;
	int			getAp(void) const;
	AWeapon		*getWeapon(void) const;
};

std::ostream 	&operator<<(std::ostream &o, Character const &c);
#endif