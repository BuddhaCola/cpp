#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
	public:
		void attack() const;

		PowerFist(const PowerFist &);
		PowerFist &operator = (const PowerFist&);
		PowerFist();
		virtual ~PowerFist();
};

#endif // !POWERFIST_HPP