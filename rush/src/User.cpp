#include "header.hpp"

User::User() : GameObject() {}
User::User(GameBoss *boss, int x, int y) : GameObject(boss, x, y, MX_HP, GameObject::player), gun(NULL)
{
	std::string s[MX_HEIGHT] = 
	{
		"=\\  ",
		"=##\\",
		"=##/",
		"=/  "
	};
	figure = new Figure(s, 1, 4, this);
	gun = new Minigun(this);
}

User::User(User const &old) : GameObject() { *this = old; }
User::~User() { if (gun) delete gun; }
User &User::operator = (User const &old)
{
	GameObject::operator = (old);
	gun = old.gun;
	return *this;
}
void User::update(float diff)
{
	int x, y;
	getmaxyx(stdscr, x, y);
	(void)x;
	clear();
	GameObject::update(diff);
	if (gun)
		gun->update(diff);
	this->x += speed_x * diff;
	this->y += speed_y * diff;
	this->x = this->x < 1 ? 0 : this->x;
	this->y = this->y < 1 ? 0 : this->y;
	this->x = this->x >= x - 5 ? x - 5 : this->x;
	hud();
}
void User::collision(GameObject &old)
{
	if (figure->collision(old))
		if (old.get_type() == bullet)
		{
			Bullet *bullet = (Bullet *)&old;
			hp -= bullet->getDamage();
			bullet->setHp(0);
		}
}
void User::getInput(int input)
{
	if (input == KEY_UP)
		speed_x = -30.f;
	else if (input == KEY_DOWN)
		speed_x = 30.f;
	else if (input == KEY_LEFT)
		speed_y = -30.f;
	else if (input == KEY_DOWN)
		speed_y = 30.f;
	else if (input == KEY_SPACE)
	{
		attack();
		reset_speed();
	}
}
void User::attack() { if (gun) gun->attack(*boss); }
void User::setPos(int x, int y)
{
	this->x = x;
	this->y = y;
}
void User::clear()
{
	mvprintw((int)x, (int)y, "    ");
	mvprintw((int)x + 1, (int)y, "    ");
	mvprintw((int)x + 2, (int)y, "    ");
	mvprintw((int)x + 3, (int)y, "    ");
}
void User::reset_speed()
{
	speed_x = 0.f;
	speed_y = 0.f;
}
void User::takeDamage(int val) { hp -= val; }
void User::hud(void)
{
	int					i = 0;
	int					max, strSize;
	std::string			buffer;
	std::stringstream	time;
	std::stringstream	score;
	std::stringstream	best_score;

	// Life
	buffer = "Life <";
	mvprintw(1, 0, buffer.c_str());
	i += buffer.length();
	strSize = buffer.length();
	max = i + 100;
	while (i <= max)
	{
		if (i < max_hp + strSize + 1)
			mvprintw(1, i, "|");
		else
			mvprintw(1, i, "-");
		i++;
	}
	buffer = " >";
	mvprintw(1, i, buffer.c_str());

	// time
	i = 0;
	buffer = "Time <";
	mvprintw(2, i, buffer.c_str());
	i += buffer.length();
	time << (int)boss->get_time();
	mvprintw(2, i, time.str().c_str());
	i += time.str().length();
	buffer = "sec >";
	mvprintw(2, i, buffer.c_str());

	//Score
	i = 0;
	buffer = "Score < ";
	mvprintw(3, i, buffer.c_str());
	i += buffer.length();
	score << boss->get_score();
	mvprintw(3, i, score.str().c_str());
	i += score.str().length();
	buffer = " >";
	mvprintw(3, i, buffer.c_str());
	// best Score
	i = 0;
	buffer = "Last Score <";
	mvprintw(4, i, buffer.c_str());
	i += buffer.length();
	best_score << boss->getBestScore();
	mvprintw(4, i, best_score.str().c_str());
	i += best_score.str().length();
	buffer = " >";
	mvprintw(4, i, buffer.c_str());
	i += buffer.length();
}
