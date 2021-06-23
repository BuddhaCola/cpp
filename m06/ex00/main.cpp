#include <iostream>

#include "Converter.hpp"

int main (int ac, char **av)
{
	std::string input;
	Converter *arg;

	if (ac != 2)
	{
		std::cout << "invalid argument" << std::endl;
		return (0);
	}
	input = av[1];
	try {
		arg = new Converter(input);
	}
	catch (std::exception) {
		return (1);
	}
	arg->interpret();
	delete arg;
	return (0);
}