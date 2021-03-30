#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;
class AMateria
{
private:
	unsigned int		_xp;
	std::string			_type;
	AMateria(void);
public:
	AMateria(std::string const &type);
	virtual ~AMateria(void);
	AMateria(const AMateria &m);
	AMateria			&operator=(const AMateria &m);
	std::string const	&getType(void) const;
	unsigned int		getXP(void) const;
	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter& target);
};

#endif