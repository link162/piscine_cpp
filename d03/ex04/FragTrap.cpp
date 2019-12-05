/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:37:44 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/05 17:03:36 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERPRAP
#define SUPERPRAP
#include "header.hpp"

FragTrap::FragTrap() {
	std::cout << "7 years before Borderlands... FragTrap just created..." << std::endl;
	hit_point = 100;
	max_hit_point = 100;
	energy_point = 100;
	max_energy_point = 100;
	level = 1;
	melee_damage = 30;
	range_damage = 20;
	armour = 5;
	name = "FR4G-TP";
}
FragTrap::FragTrap(std::string str) {
	std::cout << "7 years before Borderlands... FragTrap " << str << " just created..." << std::endl;
	hit_point = 100;
	max_hit_point = 100;
	energy_point = 100;
	max_energy_point = 100;
	level = 1;
	melee_damage = 30;
	range_damage = 20;
	armour = 5;
	name = str;
}
FragTrap::~FragTrap() { std::cout << name << ": Oh no! Eternity again!!!" << std::endl; }
void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << " at range, causing " << range_damage << " points of damage!" << std::endl;
}
void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << " at melee, causing " << melee_damage << " points of damage!" << std::endl;
}
void	FragTrap::vaulthunter_dot_exe(std::string const &target) {
	std::string attack[5] = {"Piy-piy-piy...", "Bang-bang!...", "Back stab...", "Double kill!", "BIG BANG, MOTHERFUCKER!!!!!!"};
	if (energy_point < 25) {
		std::cout << "Couldn't perform attack, no enough energy" << std::endl;
		return;
	}
	std::cout << name << " attacked " << target << ": " << attack[rand() % 5] << std::endl;
	energy_point -= 25;
}
#endif
