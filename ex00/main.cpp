#include "zombie.hpp"

int main(void)
{
	Zombie *bonsoir = newZombie("bonsoir");
	randomChump("bonjour");
	delete bonsoir;
	return (0);
}