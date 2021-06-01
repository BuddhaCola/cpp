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
	srand (time(NULL));
	i = rand() % sizeof(nameList) / sizeof(nameList);
	return (nameList[i]);
}

void	zombieEvent::randomChump()
{
	Zombie	randomguy(randomNameGen(), _type);
	randomguy.announce();
}