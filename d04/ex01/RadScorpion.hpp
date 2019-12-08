#ifndef RAD_SCORPION
#define RAD_SCORPION

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	~RadScorpion();
	RadScorpion(RadScorpion const &old);
	RadScorpion &operator = (const RadScorpion &old);
};

#endif
