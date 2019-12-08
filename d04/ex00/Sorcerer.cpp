#include "header.hpp"

Sorcerer::Sorcerer() {}
Sorcerer::Sorcerer(std::string const &name, std::string const &title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
	this->name = name;
	this->title = title;
}
Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}
Sorcerer::Sorcerer(const Sorcerer &old) { *this = old; }
Sorcerer &Sorcerer::operator = (const Sorcerer &old)
{
	name = old.name;
	title = old.title;
	return *this;
}
std::string const Sorcerer::getName() const { return name; }
std::string const Sorcerer::getTitle() const { return title; }
std::ostream &operator << (std::ostream &op, Sorcerer const &old)
{
	op << "I am " << old.getName() << ", " << old.getTitle() << ", and I like ponies!" << std::endl;
	return op;
}
void    Sorcerer::polymorph(Victim const &v) const { v.getPolymorphed(); }
