#ifndef PEON
#define PEON
#include "header.hpp"

class Peon : public Victim
{
	Peon();
public:
	~Peon();
	Peon(std::string const &name);
	Peon &operator = (const Peon &old);
	virtual void    getPolymorphed(void) const;
};
	std::ostream &operator << (std::ostream &op, Peon const &old);

#endif
