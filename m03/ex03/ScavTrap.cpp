#include "ScavTrap.hpp"

void	ScavTrap::challengeNewcomer()
{
	std::string challenge[] = {
		"do a barrel roll",
		"a drinking game",
		"work out that your gestalt, reasoning your everyday anxiety so you finally find awareness and clarity in life",
		"eat pants",
		"stop eating echpochmaks for at least one day",
		"bard battle"
	};
	std::cout << "✋ Stop right there! " << _name << " challenge you to "
	 << challenge[DiceRoll(sizeof(challenge) / sizeof(challenge[0]))] + "!"
	 << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, name, "scavtrap", 30, 20, 5)
{
	std::cout << "👾" << _name << " identified itself in the world as " << " " + _type << std::endl;
	std::cout << _name << " is guarding this area. He's the area guardian!" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap(100, 100, 100, 100, 1, "default scavtrap", "scavtrap", 30, 20, 5)
{
	std::cout << "👾" << _name << " identified itself in the world as Scavtrap" << std::endl;
	std::cout << _name << " is guarding this area. He's the area guardian!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &orig)
{
	std::cout << "👾" << _name << " identified itself in the world as Scavtrap" << std::endl;
	std::cout << _name << " is guarding this area. He's the area guardian!" << std::endl;
	*this = orig;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &orig)
{
	this->_HP = orig._HP;
	this->_maxHP = orig._maxHP;
	this->_energyPoints = orig._energyPoints;
	this->_maxEnergyPoints = orig._maxEnergyPoints;
	this->_level = orig._level;
	this->_name = orig._name;
	this->_type = orig._type;
	this->_meleeAttackD = orig._meleeAttackD;
	this->_rangeAttackD = orig._rangeAttackD;
	this->_armorDamageReduction = orig._armorDamageReduction;
	return(*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "💀" << _name << "\'s destructor called" << std::endl;
}