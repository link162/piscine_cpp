#include "header.hpp"

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant") { std::cout << "Gaaah. Me want smash heads !" << std::endl; }
SuperMutant::~SuperMutant() { std::cout << "Aaargh..." << std::endl; }
SuperMutant::SuperMutant(SuperMutant const &old) { *this = old; }
SuperMutant &SuperMutant::operator = (const SuperMutant &old)
{
	if (this != &old)
		*this = old;
	return *this;
}
void SuperMutant::takeDamage(int i)
{
	i -= 3;
	if (i > 0)
		hp -= i;
}
