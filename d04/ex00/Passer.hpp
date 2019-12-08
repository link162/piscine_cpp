#ifndef PASSER
#define PASSER
#include "header.hpp"

class Passer : public Victim
{
	Passer();
public:
	~Passer();
	Passer(std::string const &name);
	Passer &operator = (const Passer &old);
	virtual void    getPolymorphed(void) const;
};
	std::ostream &operator << (std::ostream &op, Passer const &old);

#endif
