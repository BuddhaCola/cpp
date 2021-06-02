#include "replace.hpp"
#include <fstream>
int main (int ac, char **av)
{
	(void) av;
	if (ac == 4)
	{
		std::ifstream fstream(av[1]);
		return (0);
	}
	else
		std::cout << "wrong number of arguments!" << std::endl;
	return (0);
}