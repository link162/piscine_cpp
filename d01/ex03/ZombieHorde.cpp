/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 10:11:47 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 10:54:19 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string ZombieHorde::names[5] = {"Mark", "Karl", "Max", "Vasia", "FUCKING STEAVE"};
std::string ZombieHorde::types[5] = {"killer", "runner", "tank", "creepy", "hungry"};
ZombieHorde::ZombieHorde(int i)
{
	count = i;
	orda = new Zombie[i];
	for (int z = 0; z < i; z++)
		orda[z].set_name_type(names[rand() % 5], types[rand() % 5]);
}

ZombieHorde::~ZombieHorde()
{
	delete[] orda;
}

void ZombieHorde::announce()
{
	for(int i = 0; i < count; i++)
		orda[i].announce();
}
