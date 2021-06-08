#include "FragTrap.hpp"

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	unsigned int	cost = 25;

	if (get_energyPoints() >= cost)
	{
		DiceRoll(2) ? rangedAttack(target) : meleeAttack(target);
		set_energyPoints(get_energyPoints() - cost);
	}
	else
		std::cout << get_name() << " doesn't feel like attacking " << target << " anymore." << std::endl;
}

// void FragTrap::rangedAttack(std::string const & target)
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

// void	FragTrap::meleeAttack(std::string const & target)
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
// void	FragTrap::takeDamage(unsigned int amount)
// {
// 	std::cout << "FR4G-TP " << _name << " got hit! " << amount << " HP lost!" << std::endl;
// }
// void	FragTrap::beRepaired(unsigned int amount)
// {
// 	int	healed = amount;
// 	if (_HP + amount > _maxHP)
// 	{
// 		_HP = _maxHP;
// 		healed = _maxHP - _HP;
// 	}
// 	else
// 		_HP += amount;
// 	std::cout << "FR4G-TP " << _name << " repair itself. " << healed << " HP restored!" << std::endl;
// }

// FragTrap::FragTrap() : _HP(100), _maxHP(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name("Константин"), _meleeAttackD(30), _rangeAttackD(20), _armorDamageReduction(5)
// {
// 	std::cout << _name << " came here to chew bubblegum and kick ass. And it's all outa gum." << std::endl;
// }

// FragTrap::FragTrap(std::string name) : _HP(100), _maxHP(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name(name), _meleeAttackD(30), _rangeAttackD(20), _armorDamageReduction(5)
// {
// 	std::cout << _name << " came here to chew bubblegum and kick ass. And it's all outa gum." << std::endl;
// }

// FragTrap::FragTrap(FragTrap const &orig)
// {
// 	*this = orig;
// }

// FragTrap &FragTrap::operator = (const FragTrap &orig)
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

// FragTrap::~FragTrap()
// {
// 	std::cout << _name << " done." << std::endl;
// }