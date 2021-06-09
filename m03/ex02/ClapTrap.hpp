#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	protected:
		unsigned int	_HP;
		unsigned int	_maxHP;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_meleeAttackD;
		unsigned int	_rangeAttackD;
		unsigned int	_armorDamageReduction;
	public:
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClapTrap(const std::string name);
		ClapTrap();
		ClapTrap(const ClapTrap &);
		ClapTrap &operator = (const ClapTrap&);
		~ClapTrap();
};

int	DiceRoll(int variants);

#endif