#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	public:
		void		execute(Bureaucrat const & executor) const;
		RobotomyRequestForm(std::string target);

		RobotomyRequestForm(const RobotomyRequestForm &);
		RobotomyRequestForm &operator = (const RobotomyRequestForm &);
		~RobotomyRequestForm();
	private:
		RobotomyRequestForm();
};

#endif // !ROBOTOMYREQUESTFORM_HPP