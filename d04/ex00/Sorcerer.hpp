#ifndef SORCERER
#define SORCERER
#include "header.hpp"

class Sorcerer
{
	Sorcerer();
	std::string name;
	std::string title;
public:
	~Sorcerer();
	Sorcerer(const Sorcerer &old);
	Sorcerer &operator = (const Sorcerer &old);
	Sorcerer(std::string const &name, std:: string const &title);
	std::string const getName() const;
	std::string const getTitle() const;
	void polymorph(Victim const &) const;
};
	std::ostream &operator << (std::ostream &op, Sorcerer const &old);

#endif
