#include "Pony.hpp"

Pony::Pony(std::string name)
{
	this->name = name;
	std::cout << name << " is born! 🐴" << std::endl;
}

Pony::~Pony()
{
	std::cout << name << " всё. 💀" << std::endl;
}