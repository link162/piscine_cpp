#include "header.hpp"

Weapon::Weapon() : damage(0), shoot_delay(0.f), timer(0.f), name("NULL"), boss(NULL) {}
Weapon::Weapon(Weapon const &old) : shoot_delay(0.f) { *this = old; }
Weapon::~Weapon() {}
Weapon::Weapon(int n_damage, float n_shoot_delay, std::string n_name, GameObject *n_boss): damage(n_damage), shoot_delay(n_shoot_delay), name(n_name), boss(n_boss) {}
Weapon &Weapon::operator = (Weapon const &old)
{
	damage = old.damage;
	name = old.name;
	return *this;
}
std::string const &Weapon::get_name() const { return name; }
void Weapon::update(float diff) { timer += diff; }
int Weapon::get_damage() const { return damage; }
GameObject *Weapon::get_parent() const { return boss; }
