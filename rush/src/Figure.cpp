#include "header.hpp"

Figure::Figure() : num_frame(1), curr_frame(0), size_frame(MX_HEIGHT), clock(0.f), boss(NULL) {}
Figure::Figure(Figure const &old) {*this = old; }
Figure &Figure::operator = (Figure const &old) {(void)old; return *this; }
Figure::Figure(std::string shape[MX_HEIGHT], GameObject *boss) : num_frame(1), curr_frame(0), size_frame(MX_HEIGHT), clock(0.f), boss(boss)
{
	for (int i = 0; i < MX_HEIGHT; i++)
		this->shape[i] = shape[i];
}
Figure::Figure(std::string shape[MX_HEIGHT], int nb_f, int sz_f, GameObject *boss) : num_frame(nb_f), curr_frame(0), size_frame(sz_f), clock(0.f), boss(boss)
{
	for (int i = 0; i < MX_HEIGHT; i++)
		this->shape[i] = shape[i];
}
Figure::~Figure() {}
void Figure::update(float diff)
{
	clock+= diff * 15.f;
	curr_frame = (int)clock;
	if (curr_frame >= num_frame)
	{
		clock = 0;
		curr_frame = 0;
	}
}
void Figure::display(int x, int y)
{
	for(int i = 0; i < size_frame; i++)
		mvprintw(x + i, y, shape[curr_frame * size_frame + i].c_str());
}
bool Figure::collision(GameObject const &object)
{
	if (boss->is_killed() || object.is_killed())
		return false;
	for(int i = 0; i < size_frame; i++)
		for(int j = 0; shape[i][j]; j++)
			if (shape[i][j] != ' ')
				for (int x = 0; x < object.get_figure()->size_frame; x++)
					for (int y = 0; object.get_figure()->shape[x][y]; y++)
						if (object.get_figure()->shape[x][y] != ' ')
							if ((int)boss->get_x() + i == (int)object.get_x() + x &&
								(int)boss->get_y() + j == (int)object.get_y() + y)
									return true;
	return false;
}
