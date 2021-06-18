#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {
	private:
		std::string name;
		int			apcost;
		int			damage;
	public:
		virtual void attack() const = 0;
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		void setName(std::string name);
		void setApcost(int apcost);
		void setDamage(int damage);

		AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon &);
		AWeapon &operator = (const AWeapon&);
		virtual ~AWeapon() = 0;
};

#endif // !AWEAPON_HPP