#include <iostream>

#define BOLDMAGENTA	"\033[1m\033[35m"
#define RESET		"\033[0m"

int main ()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << BOLDMAGENTA << "Pointer:\n" << RESET << *ptr << std::endl;
	std::cout << BOLDMAGENTA << "Reference:\n" << RESET << ref << std::endl;
}