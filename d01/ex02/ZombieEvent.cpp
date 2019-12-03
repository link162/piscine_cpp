/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:40:55 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/02 20:29:59 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>
std::string ZombieEvent::names[] = {"Bob", "Karl", "Max", "Link", "FUCKING STEAVE"};

ZombieEvent::ZombieEvent()
{
	type = "unknown";
}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return new Zombie(name, type);
}

void ZombieEvent::randomChamp()
{
	Zombie z1(names[rand() % 5], type);
	z1.announce();
}
