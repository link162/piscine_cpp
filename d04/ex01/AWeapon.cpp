#include "header.hpp"

AWeapon::AWeapon() : name("Unknown"), cost(0), damage(0) {}
AWeapon::AWeapon(std::string const &n, int c, int d) : name(n), cost(c), damage(d) {}
AWeapon::~AWeapon() {};
std::string const AWeapon::getName() const { return name; }
int AWeapon::getAPCost() const { return cost; }
int AWeapon::getDamage() const { return damage; }
AWeapon::AWeapon(const AWeapon &old) { *this = old; }
AWeapon &AWeapon::operator = (const AWeapon &old)
{
	if (this != &old)
		*this = old;
	return *this;
}
