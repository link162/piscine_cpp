/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 20:53:01 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/04 21:19:27 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Rebuilding old robot... SC4V-TP just create!" << std::endl;
	hit_point = 100;
	max_hit_point = 100;
	energy_point = 50;
	max_energy_point = 50;
	level = 1;
	melee_damage = 20;
	range_damage = 15;
	armour = 3;
	name = "SC4V-TP";
}
ScavTrap::ScavTrap(std::string str) {
	std::cout << "Rebuilding old robot... " << str << " just created!" << std::endl;
	hit_point = 100;
	max_hit_point = 100;
	energy_point = 50;
	max_energy_point = 50;
	level = 1;
	melee_damage = 20;
	range_damage = 15;
	armour = 3;
	name = str;
}
ScavTrap::~ScavTrap() { std::cout << name << ": I am feeling so light!" << std::endl; }
ScavTrap::ScavTrap(const ScavTrap &old) { *this = old; }
ScavTrap &ScavTrap::operator = (const ScavTrap &old)
{
	hit_point		 = old.hit_point;
	max_hit_point	 = old.max_hit_point;
	energy_point	 = old.energy_point;
	max_energy_point = old.max_energy_point;
	level			 = old.level;
	melee_damage	 = old.melee_damage;
	range_damage	 = old.range_damage;
	armour			 = old.armour;
	name			 = old.name;
	return *this;
}
void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << name << " attacks " << target << " at range, causing " << range_damage << " points of damage!" << std::endl;
}
void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << name << " attacks " << target << " at melee, causing " << melee_damage << " points of damage!" << std::endl;
}
void ScavTrap::takeDamage(unsigned int amount)
{
	int damage = amount - armour;
	if (damage < 0) damage = 0;
	if (hit_point < damage) damage = hit_point;
	hit_point -= damage;
	std::cout << "SC4V-TP " << name << " get " << damage << " points of damage!" << std::endl;
}
void ScavTrap::beRepaired(unsigned int amount)
{
	if ((int)amount + hit_point > max_hit_point) amount = max_hit_point - hit_point;
	std::cout << "SC4V-TP " << name << " was repaired of " << amount << " HP!" << std::endl;
}
void	ScavTrap::challengeNewcomer() {
	std::string attack[5] = {"russian roulette! What's the worst that can happen to me?", "Hold me, I am so angry!...", "How many legs have hourse? wrong, already only 3!", "Tell me the joke...", "You really think I want to talk with you?"};
	std::cout << name << ": " << attack[rand() % 5] << std::endl;
}
