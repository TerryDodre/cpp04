#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_inv[4];
public:
	MateriaSource(void);
	virtual ~MateriaSource(void);
	MateriaSource(const MateriaSource &m);
	MateriaSource		&operator=(const MateriaSource &m);
	void 				learnMateria(AMateria *m);
    AMateria			*createMateria(std::string const &type);
};

#endif