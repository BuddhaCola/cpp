#include "Enemy.hpp"

std::string const &Enemy::getType() const {
	return(this->type);
}

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type)
{}

void Enemy::takeDamage(int amount)
{
	if (amount < 0)
		return ;
	if (hp - amount > 0)
		hp -= amount;
	else
		hp = 0;
}

int	Enemy::getHP() const {
	return (hp);
}

Enemy::Enemy(const Enemy &orig)
{
	*this = orig;
}

Enemy &Enemy::operator = (const Enemy&orig)
{
	this->hp = orig.hp;
	this->type = orig.type;
	return(*this);
}

Enemy::Enemy() : hp(0), type("dummy")
{}

Enemy::~Enemy() {}
