#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim {
protected:
	std::string _name;
public:
	virtual void getPolymorphed() const;
	Victim(const std::string &name);

	std::string getName() const;

	Victim(const Victim &);
	Victim &operator = (const Victim&);
	Victim();
	~Victim();
};

std::ostream & operator << (std::ostream &out, Victim const & current );

#endif // !VICTIM_HPP