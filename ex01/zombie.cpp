#include "zombie.hpp"

// Using initialization list
Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": died" << std::endl;
	return ;
}

void Zombie::initialize(std::string name)
{
	this->_name = name;
	return ;
}

void Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}