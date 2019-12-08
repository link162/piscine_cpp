#include "header.hpp"

Victim::Victim() {}
Victim::Victim(std::string const &name)
{
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
	this->name = name;
}
Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason !" << std::endl;
}
Victim::Victim(const Victim &old) { *this = old; }
Victim &Victim::operator = (const Victim &old)
{
	name = old.name;
	return *this;
}
std::string const Victim::getName() const { return name; }
std::ostream &operator << (std::ostream &op, Victim const &old)
{
	op << "I am " << old.getName() << " and I like otters !" << std::endl;
	return op;
}
void Victim::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a cute little sheep !" << std::endl;
}
