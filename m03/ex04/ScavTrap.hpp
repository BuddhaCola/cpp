#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		void	challengeNewcomer();
		ScavTrap(std::string name);
		
		ScavTrap();
		ScavTrap(ScavTrap const &);
		ScavTrap &operator = (const ScavTrap&);
		~ScavTrap();
};
#endif