#include "Zombie.hpp"

std::string	randomAnnounceGen()
{
	int i;
	std::string announceList[] = {
	"Ползёт по полу",
	"Тычет в глаз вилкой",
	"Хочет домой",
	"Залипает в телефоне"
	};
	srand (time(NULL));
	i = rand() % sizeof(announceList) / 24;
	return (" <" + announceList[i] + ">");
}

void		Zombie::announce()
{
	std::cout << "🧟‍ (" << _type << ") "  << _name 
	<< randomAnnounceGen() << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

Zombie::~Zombie()
{
	std::cout << "💀‍ (" << _type << ") "  << _name 
	<< " <died>" << std::endl;
}