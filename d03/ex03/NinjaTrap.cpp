/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:37:44 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/05 14:48:29 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

NinjaTrap::NinjaTrap() {
	std::cout << "NinjaTrap just created..." << std::endl;
	hit_point = 60;
	max_hit_point = 60;
	energy_point = 120;
	max_energy_point = 120;
	level = 1;
	melee_damage = 60;
	range_damage = 5;
	armour = 0;
	name = "NinjaTrap";
}
NinjaTrap::NinjaTrap(std::string str) {
	std::cout << "NinjaTrap " << str << " just created..." << std::endl;
	hit_point = 60;
	max_hit_point = 60;
	energy_point = 120;
	max_energy_point = 120;
	level = 1;
	melee_damage = 60;
	range_damage = 5;
	armour = 0;
	name = str;
}
NinjaTrap::~NinjaTrap() { std::cout << name << ": I will die like a hero! Sepppuku!!!" << std::endl; }
void NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "NinjaTrap " << name << " attacks " << target << " at range, causing " << range_damage << " points of damage!" << std::endl;
}
void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NinjaTrap " << name << " attacks " << target << " at melee, causing " << melee_damage << " points of damage!" << std::endl;
}
void	NinjaTrap::ninjaShoebox(const NinjaTrap &nt) {
	std::cout << "All my life I fighting with " << nt.getName() << ", really?" << std::endl;
}
void	NinjaTrap::ninjaShoebox(const ScavTrap &st) {
	std::cout << "Hah, this will be easy) Die, " << st.getName() << std::endl;
}
void	NinjaTrap::ninjaShoebox(const FragTrap &ft) {
	std::cout << ft.getName() << ", prepare go to dump!" << std::endl;
}
