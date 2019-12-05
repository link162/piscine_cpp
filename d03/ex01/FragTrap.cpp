/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:37:44 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/04 20:43:31 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "7 years before Borderlands... FR4G-TP just created..." << std::endl;
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
	std::cout << "7 years before Borderlands... " << str << " just created..." << std::endl;
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
FragTrap::FragTrap(const FragTrap &old) { *this = old; }
FragTrap &FragTrap::operator = (const FragTrap &old)
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
void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << " at range, causing " << range_damage << " points of damage!" << std::endl;
}
void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << " at melee, causing " << melee_damage << " points of damage!" << std::endl;
}
void FragTrap::takeDamage(unsigned int amount)
{
	int damage = amount - armour;
	if (damage < 0) damage = 0;
	if (hit_point < damage) damage = hit_point;
	hit_point -= damage;
	std::cout << "FR4G-TP " << name << " get " << damage << " points of damage!" << std::endl;
}
void FragTrap::beRepaired(unsigned int amount)
{
	if ((int)amount + hit_point > max_hit_point) amount = max_hit_point - hit_point;
	std::cout << "FR4G-TP " << name << " was repaired of " << amount << " HP!" << std::endl;
}
void	FragTrap::vaulthunter_dot_exe(std::string const &target) {
	std::string attack[5] = {"Piy-piy-piy...", "Bang-bang!...", "Back stab...", "Double kill!", "BIG BANG, MOTHERFUCKER!!!!!!"};
	if (energy_point < 25) {
		std::cout << "Couldn't perform attack, no enough energy" << std::endl;
		return;
	}
	std::cout << name << "attacked " << target << ": " << attack[rand() % 5] << std::endl;
	energy_point -= 25;
}
