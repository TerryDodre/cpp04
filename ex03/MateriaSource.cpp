#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	this->_inv[0] = NULL;
    this->_inv[1] = NULL;
    this->_inv[2] = NULL;
    this->_inv[3] = NULL;
	return;
}

MateriaSource::~MateriaSource(void)
{
	if (this->_inv[0])
		delete _inv[0];
	if (this->_inv[1])
		delete _inv[1];
	if (this->_inv[2])
		delete _inv[2];
	if (this->_inv[3])
		delete _inv[3];
	return;
}

MateriaSource::MateriaSource(const MateriaSource &m)
{
    *this = m;
}

MateriaSource		&MateriaSource::operator=(const MateriaSource &m)
{
	if (this == &m)
		return (*this);
	if (this->_inv[0])
		delete _inv[0];
	if (this->_inv[1])
		delete _inv[1];
	if (this->_inv[2])
		delete _inv[2];
	if (this->_inv[3])
		delete _inv[3];
	this->_inv[0] = m._inv[0];
	this->_inv[1] = m._inv[1];
	this->_inv[2] = m._inv[2];
	this->_inv[3] = m._inv[3];
	return (*this);
}

void				MateriaSource::learnMateria(AMateria *m)
{
	int		i = 0;

	while (i < 4 && this->_inv[i] != NULL)
		i++;
	if (i < 4)
		this->_inv[i] = m;
}

AMateria			*MateriaSource::createMateria(std::string const &type)
{
	int		i = 0;

	while (i < 4)
	{
		if (this->_inv[i] != NULL && this->_inv[i]->getType() == type)
			return (this->_inv[i]->clone());
		i++;
	}
	return (0);
}
