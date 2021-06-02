#include "ZombieHorde.hpp"

int main ()
{
	srand (time(NULL));
	ZombieHorde party(10);
	party.announce();
}