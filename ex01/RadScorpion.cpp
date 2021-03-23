#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void)
	: Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::RadScorpion(RadScorpion const &s)
	: Enemy(s.getHp(), s.getType())
{
	*this = s;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return;
}

RadScorpion		&RadScorpion::operator=(RadScorpion const &s)
{
	this->_hp = s.getHp();
	this->_type = s.getType();
	return (*this);
}