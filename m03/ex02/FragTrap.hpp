#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private:
		// unsigned int	_HP;
		// unsigned int	_maxHP;
		// unsigned int	_energyPoints;
		// unsigned int	_maxEnergyPoints;
		// unsigned int	_level;
		// std::string		_name;
		// unsigned int	_meleeAttackD;
		// unsigned int	_rangeAttackD;
		// unsigned int	_armorDamageReduction;
	public:
		// void	rangedAttack(std::string const & target);
		// void	meleeAttack(std::string const & target);
		// void	takeDamage(unsigned int amount);
		// void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);
		// FragTrap(std::string name);
		// FragTrap();
		// FragTrap(FragTrap const &);
		// FragTrap &operator = (const FragTrap&);
		// ~FragTrap();
};

#endif