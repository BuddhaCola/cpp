#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap {
	private:
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
		void	challengeNewcomer();
		ScavTrap(std::string name);
		ScavTrap();
		ScavTrap(ScavTrap const &);
		ScavTrap &operator = (const ScavTrap&);
		~ScavTrap();
};
#endif