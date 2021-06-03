#include "replace.hpp"
#include <fstream>

int main (int ac, char **av)
{
	(void) av;
	if (ac == 4)
	{
		if (!*av[1] || !*av[2])
		{
			std::cout << "empty argument!" << std::endl;
			return (-1);
		}
		std::string		filename = av[1];
		std::string		to_find = av[2];
		std::string		to_replace = av[3];
		std::ifstream	fin;
		std::ofstream	fout;
		std::string		current_str;
		std::string		changed_str;
		size_t			located;
		fin.open(filename, std::fstream::in);
		fout.open(filename + ".replace", std::ofstream::out | std::ofstream::trunc);
		if (!fin.is_open() || !fout.is_open())
		{
			std::cout << "file opening error!" << std::endl;
			return (-1);
		}
		else
		{
			while (!fin.eof())
			{
				std::getline(fin, current_str);
				located = current_str.find(to_find);
				while (located != std::string::npos)
				{
					changed_str = current_str.substr(0, located) + to_replace + current_str.substr(located + to_find.length());
					current_str = changed_str;
					located = current_str.find(to_find);
				}
				fout << current_str << std::endl;
			} 
			fin.close();
			fout.close();
		}
		return (0);
	}
	else
		std::cout << "wrong number of arguments!" << std::endl;
	return (0);
}