#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, name, "supertrap", 30, 20, 5)
{
	std::cout << "👾" << _name << " identified itself in the world as " << _type << std::endl;
	std::cout << _name << " don't know who he is anymore." << std::endl;
}

SuperTrap::SuperTrap() : ClapTrap(100, 100, 100, 100, 1, "default supertrap", "supertrap", 30, 20, 5)
{
	std::cout << "👾" << _name << " identified itself in the world as " << _type << std::endl;
	std::cout << _name << " don't know who he is anymore." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &orig)
{
	std::cout << "👾" << _name << " identified itself in the world as " << _type << std::endl;
	std::cout << _name << " don't know who he is anymore." << std::endl;
	*this = orig;
}

SuperTrap &SuperTrap::operator = (const SuperTrap &orig)
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

SuperTrap::~SuperTrap()
{
	std::cout << "💀" << _name << "\'s SuperTrap destructor called" << std::endl;
}