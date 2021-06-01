#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main ()
{
	zombieEvent	party;
	Zombie		*newguy;

	party.setZombieType("💩 Heap of the dead");
	newguy = party.newZombie("Dick");
	newguy->announce();
	newguy->announce();
	newguy->announce();
	newguy->announce();
	delete(newguy);
	party.setZombieType("🏔🏔 Twin Peaks of the Dead");
	party.randomChump();
	party.randomChump();
	party.randomChump();
	party.randomChump();
	party.randomChump();
	return (0);
}