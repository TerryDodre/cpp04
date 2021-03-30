#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class Character : public ICharacter
{
private:
	std::string			_name;
	AMateria			*_inv[4];
	Character(void);
public:
	Character(std::string name);
	virtual ~Character(void);
	Character(const Character &c);
	Character			&operator=(const Character &c);
	std::string const	&getName(void) const;
	void 				equip(AMateria* m);
	void 				unequip(int idx);
	void 				use(int idx, ICharacter& target);
};

#endif