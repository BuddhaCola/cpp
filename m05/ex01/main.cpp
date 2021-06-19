#include "Bureaucrat.hpp"

int main () {
	Bureaucrat simpledimple = Bureaucrat("Jenifffffer", 129);
	Form	fgramota = Form("fgramota", 126);
	std::cout << "Start: " << simpledimple << std::endl<< fgramota << std::endl;
	for (int i = 0; i < 7; i++)
	{
		try {
			simpledimple.upgrade();
			simpledimple.signForm(fgramota);
			std::cout << simpledimple << std::endl<< fgramota << std::endl;
		}
		catch (std:: exception &problem)
		{
			problem.what();
		}
	}
}