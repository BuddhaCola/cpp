#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer {

public:
	void	polymorph(Victim const &) const;
	void	polymorph(Peon const &target) const;
	Sorcerer(const std::string &name, const std::string &title);
	std::string getName() const;
	std::string getTitle() const;

	Sorcerer(const Sorcerer &);
	Sorcerer &operator = (const Sorcerer&);
	~Sorcerer();
private:
	std::string _name;
	std::string _title;
	Sorcerer();
};

std::ostream & operator << (std::ostream &out, Sorcerer const & current );

#endif // !SORCERER_HPP