#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main ()
{
	zombieEvent	party;
	Zombie		*newguy;
	
	party.setZombieType("Heap of the dead");
	newguy = party.newZombie("💩 Heapster");
	newguy->announce();
	party.setZombieType("Deadstack!");
	party.randomChump();
	party.randomChump();
	party.randomChump();
	delete(newguy);
	return (0);
}