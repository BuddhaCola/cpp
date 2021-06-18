#ifndef FISTS_HPP
# define FISTS_HPP

#include "AWeapon.hpp"

class Fists : public AWeapon {
	public:
		void attack() const;

		Fists(const Fists &);
		Fists &operator = (const Fists&);
		Fists();
		virtual ~Fists();
};

#endif // !FISTS_HPP