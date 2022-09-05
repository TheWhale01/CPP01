#include "zombie.hpp"

int main(void)
{
	Zombie *zlst;

	zlst = zombieHorde(10, "bonsoir");
	delete [] zlst;
	return (0);
}