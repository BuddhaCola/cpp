#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
	public:
		PlasmaRifle(std::string const & name, int apcost, int damage);
		void attack() const;

		PlasmaRifle(const PlasmaRifle &);
		PlasmaRifle &operator = (const PlasmaRifle&);
		PlasmaRifle();
		~PlasmaRifle();
};

#endif // !PLASMARIFLE_HPP