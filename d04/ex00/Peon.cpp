#include "header.hpp"

Peon::Peon(std::string const &name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}
Peon::Peon() {}
Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}
std::ostream &operator << (std::ostream &op, Peon const &old)
{
	op << "I am " << old.getName() << " and I like otters !" << std::endl;
	return op;
}
void Peon::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a pink pony !" << std::endl;
}
Peon &Peon::operator = (const Peon &old)
{
	name = old.name;
	return *this;
}
