#include "Squad.hpp"

Squad::Squad(void)
	: _nb_units(0), _units_list(NULL)
{
	return;
}

Squad::~Squad(void)
{
	t_units	*tmp;

	while (this->_units_list != NULL)
	{
		tmp = this->_units_list->_next;
		delete this->_units_list->_unit;
		delete this->_units_list;
		this->_units_list = tmp;
	}
	return;
}

Squad::Squad(const Squad &s)
{
	*this = s;
}

Squad			&Squad::operator=(const Squad &s)
{
	if (this == &s)
		return (*this);

	t_units	*tmp;

	while (this->_units_list != NULL)
	{
		tmp = this->_units_list->_next;
		delete this->_units_list->_unit;
		delete this->_units_list;
		this->_units_list = tmp;
	}
	tmp = s._units_list;
	while (tmp != NULL)
	{
		this->push(tmp->_unit->clone());
		tmp = tmp->_next;
	}
	this->_nb_units = s._nb_units;
	return (*this);
}

int				Squad::getCount(void) const
{
	return (this->_nb_units);
}

ISpaceMarine	*Squad::getUnit(int i) const
{
	t_units *tmp = this->_units_list;

	if (i < 0 && getCount() < i)
		return (NULL);
	while (i > 0)
	{
		tmp = tmp->_next;
		i--;
	}
	return (tmp->_unit);
}

int				Squad::push(ISpaceMarine *i)
{
	if (!i)
		return (getCount());
	if (this->_units_list == NULL)
	{
		this->_units_list = new t_units;
		this->_units_list->_next = NULL;
		this->_units_list->_unit = i;
		this->_nb_units += 1;
		return (getCount());
	}

	t_units	*tmp = this->_units_list;
	while (tmp->_next != NULL)
	{
		if (tmp->_unit == i)
			return (getCount());
		tmp = tmp->_next;
	}
	if (tmp->_unit == i)
		return (getCount());
	tmp->_next = new t_units;
	tmp->_next->_unit = i;
	tmp->_next->_next = NULL;
	this->_nb_units += 1;
	return (getCount());
}