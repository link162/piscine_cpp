/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:28:01 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/04 20:29:07 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
#define FRAGTRAP

#include <string>
#include <iostream>

class FragTrap
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
	FragTrap();
	~FragTrap();
	FragTrap(std::string str);
	FragTrap(const FragTrap &old);
	FragTrap &operator = (const FragTrap &old);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);
};

#endif
