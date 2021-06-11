#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {
public:
	void getPolymorphed() const;
	Peon(const std::string &name);

	Peon(const Peon &);
	Peon &operator = (const Peon&);
	Peon();
	~Peon();
};

#endif // !PEON_HPP