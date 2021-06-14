#ifndef FISTS_HPP
# define FISTS_HPP

#include "AWeapon.hpp"

class Fists : public AWeapon {
	public:
		Fists(std::string const & name, int apcost, int damage);
		void attack() const;

		Fists(const Fists &);
		Fists &operator = (const Fists&);
		Fists();
		~Fists();
};

#endif // !FISTS_HPP