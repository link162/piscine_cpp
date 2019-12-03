/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:49:39 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/02 20:42:52 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	Zombie z1("karl", "runner");
	z1.announce();
	ZombieEvent event;
	event.randomChamp();
	event.setZombieType("killer");
	for (int i = 0; i < 5; i++)
		event.randomChamp();
	Zombie *z2 = event.newZombie("Worm");
	z2->announce();
	delete z2;
}
