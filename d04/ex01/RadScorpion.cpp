#include "header.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") { std::cout << "* click click click *" << std::endl; }
RadScorpion::~RadScorpion() { std::cout << "* SPROTCH *" << std::endl; }
RadScorpion::RadScorpion(RadScorpion const &old) { *this = old; }
RadScorpion &RadScorpion::operator = (const RadScorpion &old)
{
	if (this != &old)
		*this = old;
	return *this;
}
