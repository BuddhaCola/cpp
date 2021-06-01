#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
class zombieEvent
{
	std::string _type;
	public:
	void		setZombieType(std::string type);
	Zombie*		newZombie(std::string name);
	void		randomChump();
};
#endif