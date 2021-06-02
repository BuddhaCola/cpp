#include "Zombie.hpp"

class ZombieHorde
{
	int		_N;
	Zombie	*horde;

	public:
	void announce();
	ZombieHorde(int n);
	~ZombieHorde();
};