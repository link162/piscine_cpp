#ifndef GAME_BOSS
#define GAME_BOSS

#include "header.hpp"

class GameBoss
{
	GameBoss(GameBoss const &old);
	GameBoss &operator = (GameBoss const &old);
	User		*user;
	Generate	*gen;
	Bullet		*bullet[MX_BULLETS];
   	Enemy		*enemy[MX_ENEMY];
	bool		end;
	int			num_bullets;
	int 		num_enemies;
	int			time;
	int 		score;
	int			best_score;
public:
	GameBoss();
	virtual ~GameBoss();
	void	getInput();
	void	update(float diff);
	void	display();
	void	start();
	void	restart();
	void	new_enemy(Enemy *old);
	void	new_bullet(Bullet *old);
	int		get_enemies() const;
	float	get_time() const;
	int		get_score() const;
	int		getBestScore() const;
	void	add_score(int score);
};

#endif
