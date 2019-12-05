/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 20:53:01 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/05 13:56:41 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap just create!" << std::endl;
	hit_point = 100;
	max_hit_point = 100;
	energy_point = 50;
	max_energy_point = 50;
	level = 1;
	melee_damage = 20;
	range_damage = 15;
	armour = 3;
	name = "Default";
}
ClapTrap::~ClapTrap() { std::cout << name << ": now I'm dying, but after reborn I'll kill you!" << std::endl; }

ClapTrap::ClapTrap(std::string str) {
	std::cout << "ClapTrap " << str << " just created!" << std::endl;
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
ClapTrap::ClapTrap(const ClapTrap &old) { *this = old; }
ClapTrap &ClapTrap::operator = (const ClapTrap &old)
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
void ClapTrap::takeDamage(unsigned int amount)
{
	int damage = amount - armour;
	if (damage < 0) damage = 0;
	if (hit_point < damage) damage = hit_point;
	hit_point -= damage;
	std::cout << name << " get " << damage << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount + hit_point > max_hit_point) amount = max_hit_point - hit_point;
	std::cout << name << " was repaired of " << amount << " HP!" << std::endl;
}
