#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include <iostream>

class Squad : public ISquad
{
private:
	typedef struct			s_units
	{
		ISpaceMarine		*_unit;
		struct s_units		*_next;
	}						t_units;
	int						_nb_units;
	t_units					*_units_list;
public:
	Squad(void);
	virtual ~Squad(void);
	Squad(const Squad &s);
	Squad					&operator=(const Squad &s);
    virtual int				getCount() const;
	virtual ISpaceMarine	*getUnit(int) const;
	virtual int				push(ISpaceMarine *i);
};

#endif