#include "Weapon.hpp"

Weapon::Weapon(std::string const type): _type(type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

void Weapon::setType(std::string name)
{
	this->_type = name;
}

std::string Weapon::getType(void) const
{
	return (this->_type);
}
