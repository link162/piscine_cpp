/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:33:15 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/02 20:29:57 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT
#define ZOMBIE_EVENT
#include "Zombie.hpp"

class ZombieEvent
{
	static std::string names[5];
	std::string type;
	public:
	ZombieEvent();
	void setZombieType(std::string type);
	Zombie *newZombie(std::string name);
	void randomChamp();
};
#endif
