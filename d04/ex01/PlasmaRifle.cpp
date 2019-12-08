#include "header.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}
PlasmaRifle::~PlasmaRifle() {};
PlasmaRifle::PlasmaRifle(const PlasmaRifle &old) { *this = old; }
PlasmaRifle &PlasmaRifle::operator = (const PlasmaRifle &old)
{
	if (this != &old)
		*this = old;
	return *this;
}
void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
