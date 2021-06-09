#include "NinjaTrap.hpp"

void	Ninjatrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << _name << " shoeboxing " << target.get_type() << " named " << target.get_name() << "." << std::endl;;
	target.set_level(target.get_level() + 5);
	std::cout << target.get_name() << " is now level " << target.get_level() << " " << target.get_type() <<"!" << std::endl;
}
void	Ninjatrap::ninjaShoebox(FragTrap &target)
{
	std::cout << _name << " shoeboxing " << target.get_type() << " named " << target.get_name() << "." << std::endl;;
	target.set_level(target.get_level() + 5);
	std::cout << target.get_name() << " is now level " << target.get_level() << " " << target.get_type() <<"!" << std::endl;
}
void	Ninjatrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << _name << " shoeboxing " << target.get_type() << " named " << target.get_name() << "." << std::endl;;
	target.set_level(target.get_level() + 5);
	std::cout << target.get_name() << " is now level " << target.get_level() << " " << target.get_type() <<"!" << std::endl;
}
void	Ninjatrap::ninjaShoebox(Ninjatrap &target)
{
	std::cout << _name << " shoeboxing " << target.get_type() << " named " << target.get_name() << "." << std::endl;;
	target.set_level(target.get_level() + 5);
	std::cout << target.get_name() << " is now level " << target.get_level() << " " << target.get_type() <<"!" << std::endl;
}

Ninjatrap::Ninjatrap(std::string name) : ClapTrap (60, 60, 120, 120, 1, name, "ninjatrap", 60, 5, 0)
{
	std::cout << "👾" << _name << " identified itself in the world as Ninjatrap" << std::endl;
	std::cout << _name << " is not really a ninja. But it can yell like ninja!" << std::endl;
}

Ninjatrap::Ninjatrap() : ClapTrap (60, 60, 120, 120, 1, "default ninjatrap", "ninjatrap", 60, 5, 0)
{
	std::cout << "👾" << _name << " identified itself in the world as Ninjatrap" << std::endl;
	std::cout << _name << " is not really a ninja. But it can yell like ninja!" << std::endl;
}

Ninjatrap::Ninjatrap(Ninjatrap const &orig)
{
	*this = orig;
	std::cout << "👾" << _name << " identified itself in the world as Ninjatrap" << std::endl;
	std::cout << _name << " is not really a ninja. But it can yell like ninja!" << std::endl;
}

Ninjatrap &Ninjatrap::operator = (const Ninjatrap &orig)
{
	this->_HP = orig._HP;
	this->_maxHP = orig._maxHP;
	this->_energyPoints = orig._energyPoints;
	this->_maxEnergyPoints = orig._maxEnergyPoints;
	this->_level = orig._level;
	this->_name = orig._name;
	this->_meleeAttackD = orig._meleeAttackD;
	this->_rangeAttackD = orig._rangeAttackD;
	this->_armorDamageReduction = orig._armorDamageReduction;
	return(*this);
}

Ninjatrap::~Ninjatrap()
{
	std::cout << "💀" << _name << "\'s Ninjatrap destructor called" << std::endl;
}