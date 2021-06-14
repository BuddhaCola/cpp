#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
	private:
		std::string	name;
		int			ap;
		AWeapon		*weapon;
	public:
		AWeapon		*getWeapon() const;
		Character(std::string const & name);
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const &getName() const;
		int const &getAp() const;

		Character(const Character &);
		Character &operator= (const Character &);
		Character();
		virtual ~Character();
};

std::ostream & operator << (std::ostream &out, Character const & current );

#endif // !CHARACTER_HPP