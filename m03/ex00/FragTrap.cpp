#include "FragTrap.hpp"

std::string	FragTrap::randomAttack()
{
	int i;
	std::string attack[] = {
		"insult mother",
		"tries to confuse with a song",
	};
	i = rand() % sizeof(attack) / 24;
	return (" <" + attack[i] + ">");
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (_energyPoints >= 25)
	{
		std::cout << _name << randomAttack() << " " << target << "! It loses " << _meleeAttackD << " HP!" << std::endl;
		_energyPoints -= 25;
	}
	else
		std::cout << "maybe would attack " << target << ".\nBut it just can't do it anymore." << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _rangeAttackD << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target << " manually, causing " << _meleeAttackD << " points of damage!" << std::endl;
}
void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP " << _name << " got hit! " << amount << " HP lost!" << std::endl;
}
void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << _name << " repair itself. " << amount << " HP restored!" << std::endl;
}

FragTrap::FragTrap() : _HP(100), _maxHP(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name("Константин"), _meleeAttackD(30), _rangeAttackD(20), _armorDamageReduction(5)
{
}

FragTrap::FragTrap(std::string name) : _HP(100), _maxHP(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name(name), _meleeAttackD(30), _rangeAttackD(20), _armorDamageReduction(5)
{
}

FragTrap::FragTrap(FragTrap const &orig)
{
	*this = orig;
}

FragTrap &FragTrap::operator = (const FragTrap &orig)
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

FragTrap::~FragTrap()
{
}