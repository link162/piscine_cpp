/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 10:03:56 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 10:47:52 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE
#define ZOMBIE_HORDE
#include "Zombie.hpp"

class ZombieHorde
{
	static std::string names[5];
	static std::string types[5];
	int count;
	Zombie *orda;
	public:
	ZombieHorde(int i);
	~ZombieHorde();

	void announce();

};


#endif
