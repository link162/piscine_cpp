#include "header.hpp"

Enemy::Enemy(void) : GameObject(), gun(NULL) {}
Enemy::Enemy(GameBoss *boss, int x, int y) : GameObject(boss, x, y, MX_HP, GameObject::enemy)
{
	srand(time(NULL));
	std::string t[MX_HEIGHT] = {
		"    __ ",
		" --/##\\",
		"/#####|",
		"-/|\\-/|",
		"    __ ",
		" --/##\\",
		"/#####|",
		"/|\\-/|\\",
		"    __ ",
		" --/##\\",
		"/#####|",
		"|\\-/|\\-",
		"    __ ",
		" --/##\\",
		"/#####|",
		"\\-/|\\-/"
	};
	figure = new Figure(t, 4, 4, this);
	gun = new Minigun(this);
}
Enemy::Enemy(Enemy const &old) : GameObject() { *this = old; }
Enemy::~Enemy()
{
	mvprintw(x, y, "       ");
	mvprintw(x + 1, y, "       ");
	mvprintw(x + 2, y, "       ");
	mvprintw(x + 3, y, "       ");
	if (gun) delete gun;
}
Enemy &Enemy::operator = (Enemy const &old)
{
	GameObject::operator =(old);
	gun = old.gun;
	return *this;
}
void Enemy::display() { if (hp > 0) GameObject::display(); }
void Enemy::update(float diff)
{
	int x, y;
	int fire = rand() % 100;
	GameObject::update(diff);
	if (gun)
		gun->update(diff);
	if (!fire)
		attack();
	this->y -= 20.f * diff;
	getmaxyx(stdscr, x, y);
	(void)x;
	if (this->y < 0)
	{
		boss->add_score(-10);
		hp = 0;
	}
}
void Enemy::collision(GameObject &old)
{
	if (figure->collision(old))
	{
		if (old.get_type() == bullet)
		{
			Bullet *bullet = (Bullet *)&old;
			hp -= bullet->getDamage();
			bullet->setHp(0);
			if (bullet->getSpeed() > 0)
				boss->add_score(100);
		}
		else if (old.get_type() == enemy)
		{
			old.setHp(0);
			setHp(0);
		}
		else if (old.get_type() == player)
		{
			User *player = (User *)&old;
			player->takeDamage(30);
			setHp(0);
		}
	}
}
void Enemy::attack() { if (gun) gun->attack(*boss); }
