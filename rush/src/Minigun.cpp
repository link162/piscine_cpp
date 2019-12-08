#include "header.hpp"

Minigun::Minigun() : Weapon() {}
Minigun::Minigun(GameObject *old) : Weapon(50, 0.35f, "Minigun", old) {}
Minigun::Minigun(Minigun const &old) : Weapon() { *this = old; }
Minigun::~Minigun() {}
Minigun &Minigun::operator = (Minigun const &old)
{
	Weapon::operator = (old);
	return *this;
}
void Minigun::attack(GameBoss &old)
{
	if (timer >= shoot_delay)
	{
		timer = 0;
		if (boss->get_type() == GameObject::player)
			old.new_bullet(new Bullet(&old, boss->get_x() + 2, boss->get_y() + 8, this));
		if (boss->get_type() == GameObject::enemy)
			old.new_bullet(new Bullet(&old, boss->get_x() + 1, boss->get_y() - 1, this));
	}
}
