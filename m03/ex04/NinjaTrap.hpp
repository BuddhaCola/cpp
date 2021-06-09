#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class Ninjatrap : public virtual ClapTrap {
	public:
		void	ninjaShoebox(ClapTrap &);
		void	ninjaShoebox(FragTrap &);
		void	ninjaShoebox(ScavTrap &);
		void	ninjaShoebox(Ninjatrap &);

		Ninjatrap(std::string name);

		Ninjatrap();
		Ninjatrap(Ninjatrap const &);
		Ninjatrap &operator = (const Ninjatrap&);
		~Ninjatrap();
};
#endif