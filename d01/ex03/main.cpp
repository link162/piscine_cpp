/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:49:39 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 10:49:46 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void)
{
	Zombie z1("karl", "runner");
	z1.announce();
	ZombieHorde orda(8);
	orda.announce();
}
