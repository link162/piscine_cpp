#ifndef FIGURE
#define FIGURE

#include "header.hpp"

class Figure
{
	std::string shape[MX_HEIGHT];
	int			num_frame;
	int 		curr_frame;
	int			size_frame;
	float		clock;
	GameObject	*boss;

	Figure();
	Figure(Figure const &old);
	Figure &operator = (Figure const &old);
	public:
	virtual ~Figure();
	Figure(std::string shape[MX_HEIGHT], GameObject *boss);
	Figure(std::string shape[MX_HEIGHT], int num, int size, GameObject *boss);
	void update(float diff);
	void display(int x, int y);
	bool collision(GameObject const &obj);
};

#endif
