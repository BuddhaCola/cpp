#include "replace.hpp"
#include <fstream>

int main (int ac, char **av)
{
	(void) av;
	if (ac == 4)
	{
		if (!av[1] || !av[2] || !av[3])
		{
			std::cout << "empty argument!" << std::endl;
		}
		std::string		filename = av[1];
		std::string		to_find = av[2];
		std::string		to_replace = av[3];
		std::ifstream	fin;
		std::string		current_str;
		size_t			located;
		// std::ofstream (filename + ".replace");
		fin.open(filename, std::fstream::in);
		if (!fin.is_open())
		{
			std::cout << "file reading error!" << std::endl;
			return (-1);
		}
		else
			std::cout << filename + " is open!\nto find: " + to_find + "\nto_replace: " + to_replace << std::endl ;
		while (!fin.eof())
		{
			std::getline(fin, current_str);
			located = current_str.find(to_find);
			if (located != std::string::npos)
				{
					std::cout << "found: " << current_str << std::endl;
					current_str.replace(located, to_replace.length(), to_replace);
					std::cout << "changed: " << current_str << std::endl;
				}
		} 
		fin.close();
		return (0);
	}
	else
		std::cout << "wrong number of arguments!" << std::endl;
	return (0);
}