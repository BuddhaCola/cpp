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
		std::string	randomAttack();
	public:
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);
		FragTrap(std::string name);
		FragTrap();
		FragTrap(FragTrap const &);
		FragTrap &operator = (const FragTrap&);
		~FragTrap();
};