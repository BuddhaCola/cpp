#include "ScavTrap.hpp"

void	ScavTrap::challengeNewcomer()
{
	std::string challenge[] = {
	"bite your elbow",
	"rate this project as outstanding",
	"bard battle"
	};
	std::cout << "✋ Stop right there! " << get_name() << " challenge you to "
	 << challenge[DiceRoll(sizeof(challenge) / sizeof(challenge[0]))] + "!"
	 << std::endl;
}

// void ScavTrap::rangedAttack(std::string const & target)
// {
// 	std::string attack[] = {
// 	"insult mother",
// 	"sings Meladze",
// 	"voilà",
// 	"Barrell roll!"
// 	};
// 	std::cout << "🏹 [ranged]" << _name << " attacks "
// 	<< target << ": <" << attack[DiceRoll(sizeof(attack) / sizeof(attack[0]))]
// 	<< ">!" << std::endl;
// }

// void	ScavTrap::meleeAttack(std::string const & target)
// {
// 		std::string attack[] = {
// 	"touch " + target + "'s tra-la-la",
// 	"does a kickflip",
// 	"voilà!",
// 	"Barrell roll!",
// 	};
// 	std::cout << "👊 [melee] " << _name << " attacks "
// 	<< target << ": <" << attack[DiceRoll(sizeof(attack) / sizeof(attack[0]))]
// 	<< ">!" << std::endl;
// }
// void	ScavTrap::takeDamage(unsigned int amount)
// {
// 	std::cout << "FR4G-TP " << _name << " got hit! " << amount << " HP lost!" << std::endl;
// }
// void	ScavTrap::beRepaired(unsigned int amount)
// {
// 	int	healed = amount;
// 	if (_HP + amount > _maxHP)
// 	{
// 		_HP = _maxHP;
// 		healed = _maxHP - _HP;
// 	}
// 	else
// 		_HP += amount;
// 	std::cout << _name << " repair itself. " << healed << " HP restored!" << std::endl;
// }

// ScavTrap::ScavTrap() : _HP(100), _maxHP(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name("Константин"), _meleeAttackD(30), _rangeAttackD(20), _armorDamageReduction(5)
// {
// 	std::cout << _name << " is guarding this area. He's the area guardian!" << std::endl;
// }

// ScavTrap::ScavTrap(std::string name) : _HP(100), _maxHP(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name(name), _meleeAttackD(30), _rangeAttackD(20), _armorDamageReduction(5)
// {
// 	std::cout << _name << " is guarding this area. He's the area guardian!" << std::endl;
// }

// ScavTrap::ScavTrap(ScavTrap const &orig)
// {
// 	*this = orig;
// }

// ScavTrap &ScavTrap::operator = (const ScavTrap &orig)
// {
// 	this->_HP = orig._HP;
// 	this->_maxHP = orig._maxHP;
// 	this->_energyPoints = orig._energyPoints;
// 	this->_maxEnergyPoints = orig._maxEnergyPoints;
// 	this->_level = orig._level;
// 	this->_name = orig._name;
// 	this->_meleeAttackD = orig._meleeAttackD;
// 	this->_rangeAttackD = orig._rangeAttackD;
// 	this->_armorDamageReduction = orig._armorDamageReduction;
// 	return(*this);
// }

// ScavTrap::~ScavTrap()
// {
// 	std::cout << _name << " doesn't really care about guarding the area anymore." << std::endl;
// }