#include <iostream>

class FragTrap {
	private:
		int			_HP;
		int			_maxHP;
		int			_energyPoints;
		int			_maxEnergyPoints;
		int			_level;
		std::string	_name;
		int			_meleeAttackD;
		int			_rangeAttackD;
		int			_armorDamageReduction;
	public:
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & targe);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		FragTrap::FragTrap(std::string name);
		FragTrap(FragTrap const &);
		FragTrap &operator = (const FragTrap&);
		~FragTrap();
};