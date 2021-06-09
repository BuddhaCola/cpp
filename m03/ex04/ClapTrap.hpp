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
		std::string		_type;
		unsigned int	_meleeAttackD;
		unsigned int	_rangeAttackD;
		unsigned int	_armorDamageReduction;
	public:
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		ClapTrap(unsigned int _HP, unsigned int _maxHP, unsigned int _energyPoints,
		unsigned int _maxEnergyPoints, unsigned int _level, std::string  _name,
		std::string _type, unsigned int _meleeAttackD, unsigned int _rangeAttackD,
		unsigned int _armorDamageReduction);
 		ClapTrap(const std::string name);
		ClapTrap();
		ClapTrap(const ClapTrap &);
		ClapTrap &operator = (const ClapTrap&);
		~ClapTrap();

		unsigned int	get_HP() const;
		unsigned int	get_maxHP() const;
		unsigned int	get_energyPoints() const;
		unsigned int	get_maxEnergyPoints() const;
		unsigned int	get_level() const;
		std::string		get_name() const;
		std::string		get_type() const;
		unsigned int	get_meleeAttackD() const;
		unsigned int	get_rangeAttackD() const;
		unsigned int	get_armorDamageReduction() const;
		void 			set_HP(const unsigned int &HP);
		void 			set_maxHP(const unsigned int &maxHP);
		void 			set_energyPoints(const unsigned int &energyPoints);
		void 			set_maxEnergyPoints(const unsigned int &maxEnergyPoints);
		void 			set_level(const unsigned int &level);
		void 			set_name(const std::string &name);
		void 			set_meleeAttackD(const unsigned int &meleeAttackD);
		void 			set_rangeAttackD(const unsigned int &rangeAttackD);
		void 			set_armorDamageReduction(const unsigned int &armorDamageReduction);
};

int	DiceRoll(int variants);

#endif