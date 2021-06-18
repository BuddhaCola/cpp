#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : virtual public Victim {
public:
	virtual void getPolymorphed() const;
	Peon(const std::string &name);

	Peon(const Peon &);
	Peon &operator = (const Peon&);
	Peon();
	virtual ~Peon();
};

#endif // !PEON_HPP