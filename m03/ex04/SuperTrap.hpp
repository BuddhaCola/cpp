#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public virtual Ninjatrap, public virtual FragTrap {
	public:
		SuperTrap(std::string name);
		
		SuperTrap();
		SuperTrap(SuperTrap const &);
		SuperTrap &operator = (const SuperTrap&);
		~SuperTrap();
};
#endif