#include "header.hpp"

GameBoss::GameBoss() : user(NULL), gen(NULL), end(false), num_bullets(0), time(clock()), score(0), best_score(0)
{
	user = new User(this, 10, 10);
	for (int i = 0; i < MX_ENEMY; i++)
		enemy[i] = 0;
	for (int i = 0; i < MX_BULLETS; i++)
		bullet[i] = 0;
	gen = new Generate(this);
}
GameBoss::GameBoss(GameBoss const &old) { *this = old; }
GameBoss::~GameBoss()
{
	if (user)	delete user;
	if (gen)	delete gen;
	restart();
}
void GameBoss::restart()
{
	for (int i = 0; i < num_enemies; i++)
		if (enemy[i])
		{
			delete enemy[i];
			enemy[i] = NULL;
		}
	for (int i = 0; i < num_bullets; i++)
		if (bullet[i])
		{
			delete bullet[i];
			bullet[i] = NULL;
		}
	if (score > best_score)
		best_score = score;
	score = 0;
	num_bullets = 0;
	num_enemies = 0;
	user->setHp(MX_HP);
	user->setPos(10, 10);
}

GameBoss &GameBoss::operator = (GameBoss const &old)
{
	(void)old;
	return *this;
}
void GameBoss::getInput()
{
	int data;
	if ((data = getch()) != ERR)
	{
		if (data == KEY_ESCAPE)
			end = true;
		user->getInput(data);
	}
}
void GameBoss::update(float diff)
{
	if (user->is_killed())
		restart();
	user->update(diff);
	gen->update(diff);
	for (int i = 0; i < num_enemies; i++)
		enemy[i]->update(diff);
	for (int i = 0; i < num_bullets; i++)
		enemy[i]->update(diff);
	for (int i = 0; i < num_bullets; i++)
	{
		for (int z = 0; z < num_bullets; z++)
			if (bullet[i] != bullet[z])
				bullet[i]->collision(*bullet[z]);
		user->collision(*bullet[i]);
	}
	for (int i = 0; i < num_enemies; i++)
	{
		enemy[i]->collision(*user);
		for (int j = 0; j < num_bullets; j++)
			enemy[i]->collision(*bullet[j]);
		for (int j = 0; j < num_enemies; j++)
			if (enemy[i] != enemy[j])
				enemy[i]->collision(*enemy[j]);
	}
	for (int i = 0; i < num_enemies; i++)
		if (enemy[i]->is_killed())
		{
			while(num_enemies > 0 && num_enemies <= MX_ENEMY && enemy[num_enemies - 1] == NULL)
				num_enemies--;
			delete enemy[i];
			num_enemies--;
			enemy[i] = enemy[num_enemies];
			enemy[num_enemies] = NULL;
		}
	for (int i = 0; i < num_bullets; i++)
		if (bullet[i]->is_killed())
		{
			while (num_bullets > 0 && num_bullets <= MX_BULLETS && bullet[num_bullets - 1] == NULL)
				num_bullets--;
			delete bullet[i];
			num_bullets--;
			bullet[i] = bullet[num_bullets];
			bullet[num_bullets] = NULL;
		}
}
void GameBoss::display()
{
	std::cout << "start\n";
	user->display();
	for (int i = 0; i < num_bullets; i++)
		bullet[i]->display();
	for (int i = 0; i < num_enemies; i++)
		enemy[i]->display();
	refresh();
	std::cout << "end\n";
}
void GameBoss::start()
{
	float f_time = 1.f / 60.f;
	initscr();
	noecho();
	nodelay(stdscr, 1);
	curs_set(false);
	keypad(stdscr, true);
	int ram = 0;
	while (!end)
	{
		clock_t t_curr = clock();
		getInput();
		update(t_curr);
		display();
		ram++;
		while (true)
		{
			float new_time = (clock() - t_curr) / (float)CLOCKS_PER_SEC;
			if (new_time > f_time)
				break;
		}
	}
	endwin();
}
void GameBoss::new_bullet(Bullet *bull) { if (num_bullets < MX_BULLETS) bullet[num_bullets++] = bull; }
void GameBoss::new_enemy(Enemy *en) { if (num_enemies < MX_ENEMY) enemy[num_enemies++] = en; }
int  GameBoss::get_enemies() const { return num_enemies; }
float GameBoss::get_time() const { return (clock() - time) / (float)CLOCKS_PER_SEC; }
int  GameBoss::get_score() const { return score; }
int  GameBoss::getBestScore() const { return best_score; }
void GameBoss::add_score(int score) { this->score += score; }
