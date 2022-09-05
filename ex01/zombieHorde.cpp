#include "zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zlst = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zlst[i].initialize(name);
		zlst[i].announce();
	}
	return (zlst);
}