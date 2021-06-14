#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		void	vaulthunter_dot_exe(std::string const & target);
		FragTrap(std::string name);
		FragTrap();
		FragTrap(FragTrap const &);
		FragTrap &operator = (const FragTrap&);
		~FragTrap();
};

#endif