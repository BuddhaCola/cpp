#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name)
{
}

void HumanA::attack()
{
	std::cout << _name << " attack with his " << _weapon.getType() << std::endl;
}