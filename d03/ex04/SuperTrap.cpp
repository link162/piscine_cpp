/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:37:44 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/05 16:59:21 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

SuperTrap::SuperTrap() {
	std::cout << "SuperTrap just created..." << std::endl;
	hit_point = 100;
	max_hit_point = 100;
	energy_point = 120;
	max_energy_point = 120;
	level = 1;
	melee_damage = 60;
	range_damage = 20;
	armour = 5;
	name = "SuperTrap";
}
SuperTrap::SuperTrap(std::string str) {
	std::cout << "SuperTrap " << str << " just created..." << std::endl;
	hit_point = 100;
	max_hit_point = 100;
	energy_point = 120;
	max_energy_point = 120;
	level = 1;
	melee_damage = 60;
	range_damage = 20;
	armour = 5;
	name = str;
}
SuperTrap::~SuperTrap() { std::cout << name << ": Superhero never die!!!" << std::endl; }
