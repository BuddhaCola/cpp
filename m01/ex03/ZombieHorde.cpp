#include "ZombieHorde.hpp"

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

	srand ((unsigned int)std::chrono::high_resolution_clock::now().time_since_epoch().count());
	i = rand() % sizeof(nameList) / 24;
	return (nameList[i]);
}

void	ZombieHorde::announce()
{
	std::cout << "<A horde of " << _N << " zombies rushed into my code!>\n" << std::endl;
	for (int i = 0; i < _N; i++)
		horde[i].announce();
	std::cout << "\n<Here they come! 😡>\n" << std::endl;
}

ZombieHorde::ZombieHorde(int n)
{
	_N = n;
	horde = new Zombie[_N]; 
	for (int i = 0; i < _N; i++)
		{
			horde[i].setName(randomNameGen());
			horde[i].setType("Horde!");
		}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Eat this you fuckers! 🧨" << std::endl;
	for (int i = 0; i < _N; i++)
		std::cout << "💥";
	std::cout << std::endl;
	delete[] horde;
}