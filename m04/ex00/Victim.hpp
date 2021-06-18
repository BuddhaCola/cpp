#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim {
public:
	virtual void getPolymorphed() const;
	Victim(const std::string &name);

	std::string getName() const;

	Victim(const Victim &);
	Victim &operator = (const Victim&);
	Victim();
	virtual ~Victim();
protected:
	std::string _name;
};

std::ostream & operator << (std::ostream &out, Victim const & current );

#endif // !VICTIM_HPP