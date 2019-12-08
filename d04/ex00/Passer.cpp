#include "header.hpp"

Passer::Passer(std::string const &name) : Victim(name)
{
	std::cout << "Top Top." << std::endl;
}
Passer::Passer() {}
Passer::~Passer()
{
	std::cout << "Bye..." << std::endl;
}
std::ostream &operator << (std::ostream &op, Passer const &old)
{
	op << "I am " << old.getName() << " and I like otters !" << std::endl;
	return op;
}
void Passer::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a huge dragon !" << std::endl;
}
Passer &Passer::operator = (const Passer &old)
{
	name = old.name;
	return *this;
}
