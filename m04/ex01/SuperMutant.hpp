#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {
	public:
		void takeDamage(int);

		SuperMutant(const SuperMutant &);
		SuperMutant &operator = (const SuperMutant&);
		SuperMutant();
		virtual ~SuperMutant();
};

#endif // !SUPERMUTANT_HPP