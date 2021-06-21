#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
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