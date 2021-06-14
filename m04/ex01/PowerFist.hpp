#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
	public:
		PowerFist(std::string const & name, int apcost, int damage);
		void attack() const;

		PowerFist(const PowerFist &);
		PowerFist &operator = (const PowerFist&);
		PowerFist();
		~PowerFist();
};

#endif // !POWERFIST_HPP