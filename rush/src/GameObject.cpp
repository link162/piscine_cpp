#include "header.hpp"

int GameObject::nbr = 0;

GameObject::GameObject() : boss(0), index(nbr) { nbr++; }
GameObject::GameObject(GameObject const &old) : index(nbr)
{
	nbr++;
	*this = old;
}
GameObject::GameObject(GameBoss *boss, int x, int y, int hp, obj type) : boss(boss), index(nbr), x(x), y(y), max_hp(hp), type(type), figure(NULL) {nbr++;}
GameObject::~GameObject() { if (figure) delete figure; }
GameObject &GameObject::operator = (GameObject const &old)
{
	this->boss = old.boss;
	this->x = old.x;
	this->y = old.y;
	this->type = old.type;
	return *this;
}
void GameObject::display() { figure->display((int)x, (int)y); }
void GameObject::update(float diff) { if (figure) figure->update(diff); }
bool GameObject::is_killed() const {
	if (hp < 1)
		return true;
	return false;
}
float GameObject::get_x() const { return x; }
float GameObject::get_y() const { return y; }
GameObject::obj GameObject::get_type() const { return type; }
Figure *GameObject::get_figure() const { return figure; }
void GameObject::setHp(int val) { hp = val; }
