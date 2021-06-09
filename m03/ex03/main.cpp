#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main ()
{
	FragTrap oleg = FragTrap("Олег");
	srand (std::time(NULL));

	std::cout << std::endl;

	ScavTrap gena = ScavTrap("Геннадий");

	std::cout << std::endl;

	Ninjatrap ryu = Ninjatrap("Ryu");
	ryu.ninjaShoebox(oleg);
	ryu.ninjaShoebox(gena);
	return (0);
}