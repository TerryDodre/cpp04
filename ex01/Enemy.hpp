#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
protected:
	int				_hp;
	std::string		_type;
public:
	Enemy(void);
	Enemy(int hp, std::string const &type);
	virtual ~Enemy(void);
	Enemy(Enemy const &e);
	Enemy			&operator=(Enemy const &e);
	std::string		getType(void) const;
	int				getHp(void) const;
	virtual void	takeDamage(int damage);
};

#endif