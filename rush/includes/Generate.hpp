#ifndef GENERATE
#define GENERATE

#include "header.hpp"

class Generate
{
	GameBoss *boss;
	int size_x;
	int size_y;
	Generate(void);
	Generate(Generate const &old);
	Generate &operator = (Generate const & old);
public:
	Generate(GameBoss *old);
	virtual ~Generate();
	void update(float diff);
};

#endif
