#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
	public:
		void attack() const;

		PlasmaRifle(const PlasmaRifle &);
		PlasmaRifle &operator = (const PlasmaRifle&);
		PlasmaRifle();
		virtual ~PlasmaRifle();
};

#endif // !PLASMARIFLE_HPP