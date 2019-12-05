/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 20:53:01 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/05 13:39:50 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
ScavTrap::ScavTrap() {
	std::cout << "Rebuilding old robot... ScavTrap just created!" << std::endl;
	hit_point = 100;
	max_hit_point = 100;
	energy_point = 50;
	max_energy_point = 50;
	level = 1;
	melee_damage = 20;
	range_damage = 15;
	armour = 3;
	name = "ScavTrap";
}
ScavTrap::ScavTrap(std::string str) {
	std::cout << "Rebuilding old robot... ScavTrap " << str << " just created!" << std::endl;
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
void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << name << " attacks " << target << " at range, causing " << range_damage << " points of damage!" << std::endl;
}
void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << name << " attacks " << target << " at melee, causing " << melee_damage << " points of damage!" << std::endl;
}
void	ScavTrap::challengeNewcomer() {
	std::string attack[5] = {"russian roulette! What's the worst that can happen to me?", "Hold me, I am so angry!...", "How many legs have hourse? wrong, already only 3!", "Tell me the joke...", "You really think I want to talk with you?"};
	std::cout << name << ": " << attack[rand() % 5] << std::endl;
}
