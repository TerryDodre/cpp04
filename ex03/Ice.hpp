#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
private:
	/* data */
public:
	Ice(void);
	virtual ~Ice(void);
	Ice(const Ice &i);
	Ice			&operator=(const Ice &i);
    AMateria	*clone(void) const;
    void        use(ICharacter& target);
};

#endif