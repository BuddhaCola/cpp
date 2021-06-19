#include "Bureaucrat.hpp"

int main () {
	try 
		{
			Bureaucrat simpledimple = Bureaucrat("Jenifffffer", 1);
			simpledimple.upgrade();
		}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// for (int i = 0; i < 200; i++)
	// 	{
	// 		std::cout << "level " << i << std::endl;
	// 		simpledimple.upgrade();}
}