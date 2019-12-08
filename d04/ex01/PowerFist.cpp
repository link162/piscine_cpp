#include "header.hpp"

PowerFist::PowerFist() : AWeapon("PowerFist", 8, 50) {}
PowerFist::~PowerFist() {};
PowerFist::PowerFist(const PowerFist &old) { *this = old; }
PowerFist &PowerFist::operator = (const PowerFist &old)
{
	if (this != &old)
		*this = old;
	return *this;
}
void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
