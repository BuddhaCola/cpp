#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	_N = n;
}

ZombieHorde::~ZombieHorde()
{
	for (int i = 0; i < _N; i++);
		delete horde[i];
}