#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
		void		execute(Bureaucrat const & executor) const;
		PresidentialPardonForm(std::string target);

		PresidentialPardonForm(const PresidentialPardonForm &);
		PresidentialPardonForm &operator = (const PresidentialPardonForm &);
		~PresidentialPardonForm();
	private:
		PresidentialPardonForm();
};

#endif // !PRESIDENTIALPARDONFORM_HPP