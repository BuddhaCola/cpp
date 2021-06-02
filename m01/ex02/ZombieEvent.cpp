#include "ZombieEvent.hpp"

void	zombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*	zombieEvent::newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name ,_type);
	return(newZombie);
}

std::string	randomNameGen()
{
	int i;
	std::string nameList[] = {
	"Bob",
	"Lora",
	"Dale",
	"Audrey",
	"Donna",
	"Leland",
	"Bobby"};
	i = rand() % sizeof(nameList) / 24;
	return (nameList[i]);
}

void	zombieEvent::randomChump()
{
	Zombie	randomguy(randomNameGen(), _type);
	randomguy.announce();
}