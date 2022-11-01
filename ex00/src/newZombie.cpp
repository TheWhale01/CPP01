#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *zb = new Zombie();
	
	zb->setName(name);
	return (zb);
}
