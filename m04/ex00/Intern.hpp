#ifndef INTERN_HPP
# define INTERN_HPP

#include "Victim.hpp"

class Intern : virtual public Victim {
public:
	virtual void getPolymorphed() const;
	Intern(const std::string &name);

	Intern(const Intern &);
	Intern &operator = (const Intern&);
	Intern();
	virtual ~Intern();
};

std::ostream & operator << (std::ostream &out, Intern const & current );

#endif // !INTERN_HPP
