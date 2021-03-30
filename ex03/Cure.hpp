#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
private:
	/* data */
public:
	Cure(void);
	virtual ~Cure(void);
	Cure(const Cure &c);
	Cure		&operator=(const Cure &c);
    AMateria	*clone(void) const;
    void        use(ICharacter& target);
};

#endif