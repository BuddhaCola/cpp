#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << _name << " attack with his " << _weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name) : _name(name)
{
}