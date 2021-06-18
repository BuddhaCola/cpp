#include "Bureaucrat.hpp"

int main () {
	Bureaucrat simpledimple = Bureaucrat("Jenifffffer", 149);
	std::cout << simpledimple << std::endl;
	simpledimple.downgrade();
	std::cout << simpledimple << std::endl;
	simpledimple.downgrade();
	std::cout << simpledimple << std::endl;
}