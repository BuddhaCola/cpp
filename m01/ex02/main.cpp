#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main ()
{
	zombieEvent	party;
	Zombie		*newguy;

	srand ((unsigned int)std::chrono::high_resolution_clock::now().time_since_epoch().count());
	party.setZombieType("Heap of the dead");
	newguy = party.newZombie("💩 Heapster");
	newguy->announce();
	party.setZombieType("RandomStack!");
	party.randomChump();
	party.randomChump();
	party.randomChump();
	delete(newguy);
	return (0);
}