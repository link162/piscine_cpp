#include "header.hpp"

Enemy::Enemy() : hp(0), type("Enemy") {}
Enemy::Enemy(int h, std::string const &t) : hp(h), type(t) {}
Enemy::~Enemy() {}
Enemy::Enemy(const Enemy &copy) { *this = copy; }
Enemy &Enemy::operator=(const Enemy &copy) {
    if (this != &copy)
		*this = copy;
 	return *this;
}
std::string const Enemy::getType() const { return type; }
int Enemy::getHP() const { return hp; }
void Enemy::takeDamage(int i)
{
	if (i > 0)
		hp -= i;
}
