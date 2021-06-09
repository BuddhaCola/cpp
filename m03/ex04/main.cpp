#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main ()
{
	Ninjatrap ryu = Ninjatrap("Ryu");
	std::cout << std::endl;
	
	SuperTrap omar = SuperTrap("Omar");
	omar.ninjaShoebox(ryu);
	omar.vaulthunter_dot_exe("");
	return (0);
}