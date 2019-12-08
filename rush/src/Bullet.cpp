#include "header.hpp"

Bullet::Bullet() {}
Bullet::Bullet(GameBoss *boss, int x, int y, Weapon *gun) : GameObject(boss, x, y, MX_HP, GameObject::bullet)
{
	speed = 0.f;
	damage = 0;
	if (gun->get_parent()->get_type() == enemy)
	{
		std::string t[MX_HEIGHT] = {
			">  ",
			">>>",
			">  "};
		speed = 50.f;
	figure = new Figure(t, this);
	}
	else
	{
		std::string t[MX_HEIGHT] = {
		   	"  *",
			" **",
			"  *" };
		speed = -50.f;
	figure = new Figure(t, this);
	}
	damage = gun->get_damage();
}

Bullet::Bullet(Bullet const &old) : GameObject() { *this = old; }
Bullet::~Bullet() { mvprintw(x, y, "   \n   \n   \n"); }
Bullet &Bullet::operator=(Bullet const &old)
{
    GameObject::operator=(old);
    return (*this);
}
void Bullet::display() { if (hp > 0) GameObject::display(); }
void Bullet::update(float diff)
{
	int x, y;
	this->y += speed * diff;
	getmaxyx(stdscr, x, y);
	(void)x;
	if (this->y > y - 3 || this->y < 0)
		hp = 0;
}
int Bullet::getDamage() const { return damage; }
float Bullet::getSpeed() const { return speed; }
void Bullet::collision(GameObject &old)
{
	if (figure->collision(old))
		if (old.get_type() == bullet)
		{
			setHp(0);
			old.setHp(0);
		}
}
