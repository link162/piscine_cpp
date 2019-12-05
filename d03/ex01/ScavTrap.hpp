/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 20:52:38 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/04 21:17:16 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
#define SCAVTRAP

#include <string>
#include <iostream>

class ScavTrap
{
	int hit_point;
	int max_hit_point;
	int energy_point;
	int max_energy_point;
	int level;
	int melee_damage;
	int range_damage;
	int armour;
	std::string name;
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string str);
	ScavTrap(const ScavTrap &old);
	ScavTrap &operator = (const ScavTrap &old);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer();
};

#endif
