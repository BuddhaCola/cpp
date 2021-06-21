#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	public:
		void		execute(Bureaucrat const & executor) const;
		ShrubberyCreationForm(std::string target);

		ShrubberyCreationForm(const ShrubberyCreationForm &);
		ShrubberyCreationForm &operator = (const ShrubberyCreationForm &);
		~ShrubberyCreationForm();
	private:
		ShrubberyCreationForm();
};

#endif // !SHRUBBERYCREATIONFORM_HPP8