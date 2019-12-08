#include "header.hpp"

Generate::Generate() {}
Generate::Generate(GameBoss* old) : boss(old) { srand(time(NULL)); }
Generate::Generate(Generate const &old) { *this = old; }
Generate::~Generate() { }
Generate &Generate::operator = (Generate const &old)
{
	(void)old;
	return (*this);
}
void Generate::update(float diff)
{
	(void)diff;
	int	x, y;
	int	pos = rand() % 40;;
	getmaxyx(stdscr, size_x, size_y);
	x = rand() % (size_x - 10);
	y = size_y - 8;
	if (x < 5)
		x = 5;

	if (boss->get_enemies() < MX_ENEMY && !pos)
		boss->new_enemy(new Enemy(boss, x, y));
}
