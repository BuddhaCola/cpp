#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:
		void		execute(Bureaucrat const & executor) const;
		ShrubberyCreationForm(std::string target);

		ShrubberyCreationForm(const ShrubberyCreationForm &);
		ShrubberyCreationForm &operator = (const ShrubberyCreationForm &);
		~ShrubberyCreationForm();
	private:
		// int exec_level;
		ShrubberyCreationForm();
};

#endif // !SHRUBBERYCREATIONFORM_HPP8