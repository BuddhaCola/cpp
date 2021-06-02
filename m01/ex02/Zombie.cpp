#include "Zombie.hpp"

std::string	randomAnnounceGen()
{
	int i;
	std::string announceList[] = {
	"ползёт по полу",
	"🥄 атакует ложкой",
	"ждёт в углу",
	" листает ленту",
	"BRAAAIIIINS!!!",
	};
	srand ((unsigned int)std::chrono::high_resolution_clock::now().time_since_epoch().count());
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