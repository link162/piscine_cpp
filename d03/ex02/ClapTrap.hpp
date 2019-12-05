/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 20:52:38 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/05 13:40:46 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP
#include "header.hpp"

class ClapTrap
{
protected:
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
	ClapTrap();
	~ClapTrap();
	ClapTrap(std::string str);
	ClapTrap(const ClapTrap &old);
	ClapTrap &operator = (const ClapTrap &old);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
