#include "FragTrap.hpp"

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	unsigned int	cost = 25;

	if (_energyPoints >= cost)
	{
		DiceRoll(2) ? rangedAttack(target) : meleeAttack(target);
		_energyPoints -= cost;
	}
	else
		std::cout << "🔌" << _name << " doesn't feel like attacking " << target << " anymore." << std::endl;
}


FragTrap::FragTrap(std::string name) : ClapTrap (100, 100, 100, 100, 1, name, "fragtrap", 30, 20, 5)
{
	std::cout << "👾" << _name << " identified itself in the world as Fragtrap" << std::endl;
	std::cout << _name << " came here to chew bubblegum and kick ass. And it's all outa gum." << std::endl;
}

FragTrap::FragTrap() : ClapTrap(100, 100, 100, 100, 1, "default fragtrap", "fragtrap", 30, 20, 5)
{
	std::cout << "👾" << _name << " identified itself in the world as Fragtrap" << std::endl;
	std::cout << _name << " came here to chew bubblegum and kick ass. And it's all outa gum." << std::endl;
}

FragTrap::FragTrap(FragTrap const &orig)
{
	*this = orig;
	std::cout << "👾" << _name << " identified itself in the world as Fragtrap" << std::endl;
	std::cout << _name << " came here to chew bubblegum and kick ass. And it's all outa gum." << std::endl;
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
		std::cout << "💀" << _name << "\'s FragTrap destructor called" << std::endl;
}