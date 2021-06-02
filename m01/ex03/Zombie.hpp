#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

#define CYAN "\033[36m"
#define RESET "\033[0m"

class Zombie
{
	std::string	_name;
	std::string	_type;

	public:
	void		announce();
	void		setName(std::string name);
	void		setType(std::string	type);
	Zombie(std::string name, std::string type);
	Zombie(){};
	~Zombie();
};

#endif