#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class Intern {
	public:
		AForm	*makeForm(std::string formType, std::string target);

		Intern();
		Intern(const Intern &);
		Intern &operator = (const Intern &);
		~Intern();
	private:
		typedef AForm *(Intern::*fncptr)(std::string const &type) const;
		static const fncptr			fnarr[3];
		static const std::string	types[3];
		AForm *shrub(std::string const &type) const;
		AForm *robo(std::string const &type) const;
		AForm *presi(std::string const &type) const;
};

#endif // !INTERN_HPP