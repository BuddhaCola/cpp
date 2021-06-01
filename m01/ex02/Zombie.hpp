#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	std::string	_name;
	std::string	_type;

	public:
	void		announce();
	void		setName(std::string name);
	void		setType(std::string	type);
	Zombie(std::string name, std::string type);
	~Zombie();
};

#endif