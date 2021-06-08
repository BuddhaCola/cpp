#include "ClapTrap.hpp"

int	DiceRoll(int variants)
{
	return (rand() % variants);
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::string attack[] = {
	"insult mother",
	"sings Meladze",
	"voilà",
	"Barrell roll!"
	};
	std::cout << "🏹 [ranged]" << _name << " attacks "
	<< target << ": <" << attack[DiceRoll(sizeof(attack) / sizeof(attack[0]))]
	<< ">!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
		std::string attack[] = {
	"touch " + target + "'s tra-la-la",
	"does a kickflip",
	"voilà!",
	"Barrell roll!",
	};
	std::cout << "👊 [melee] " << _name << " attacks "
	<< target << ": <" << attack[DiceRoll(sizeof(attack) / sizeof(attack[0]))]
	<< ">!" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP " << _name << " got hit! " << amount << " HP lost!" << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	int	healed = amount;
	if (_HP + amount > _maxHP)
	{
		_HP = _maxHP;
		healed = _maxHP - _HP;
	}
	else
		_HP += amount;
	std::cout << "FR4G-TP " << _name << " repair itself. " << healed << " HP restored!" << std::endl;
}

ClapTrap::ClapTrap() : _HP(100), _maxHP(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name("Константин"), _meleeAttackD(30), _rangeAttackD(20), _armorDamageReduction(5)
{
	std::cout << _name << " came here to chew bubblegum and kick ass. And it's all outa gum." << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _HP(100), _maxHP(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name(name), _meleeAttackD(30), _rangeAttackD(20), _armorDamageReduction(5)
{
	std::cout << _name << " came here to chew bubblegum and kick ass. And it's all outa gum." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &orig)
{
	*this = orig;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &orig)
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

ClapTrap::~ClapTrap()
{
	std::cout << _name << " done." << std::endl;
}

unsigned int	ClapTrap::get_HP() const
{
	return(_HP);
}
unsigned int	ClapTrap::get_maxHP() const
{
	return(_maxHP);
}
unsigned int	ClapTrap::get_energyPoints() const
{
	return(_energyPoints);
}
unsigned int	ClapTrap::get_maxEnergyPoints() const
{
	return(_maxEnergyPoints);
}
unsigned int	ClapTrap::get_level() const
{
	return(_level);
}
std::string		ClapTrap::get_name() const
{
	return(_name);
}
unsigned int	ClapTrap::get_meleeAttackD() const
{
	return(_meleeAttackD);
}
unsigned int	ClapTrap::get_rangeAttackD() const
{
	return(_rangeAttackD);
}
unsigned int	ClapTrap::get_armorDamageReduction() const
{
	return(_armorDamageReduction);
}

void 			ClapTrap::set_HP(const unsigned int &HP)
{
	this->_HP = HP;
}
void 			ClapTrap::set_maxHP(const unsigned int &maxHP)
{
	this->_maxHP = maxHP;
}
void 			ClapTrap::set_energyPoints(const unsigned int &energyPoints)
{
	this->_energyPoints = energyPoints;
}
void 			ClapTrap::set_maxEnergyPoints(const unsigned int &maxEnergyPoints)
{
	this->_maxEnergyPoints = maxEnergyPoints;
}
void 			ClapTrap::set_level(const unsigned int &level)
{
	this->_level = level;
}
void 			ClapTrap::set_name(const std::string &name)
{
	this->_name = name;
}
void 			ClapTrap::set_meleeAttackD(const unsigned int &meleeAttackD)
{
	this->_meleeAttackD = meleeAttackD;
}
void 			ClapTrap::set_rangeAttackD(const unsigned int &rangeAttackD)
{
	this->_rangeAttackD = rangeAttackD;
}
void 			ClapTrap::set_armorDamageReduction(const unsigned int &armorDamageReduction)
{
	this->_armorDamageReduction = armorDamageReduction;
}