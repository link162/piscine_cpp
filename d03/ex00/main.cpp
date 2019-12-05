/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:49:14 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/04 20:43:04 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap t2("Lozer");
	t2.takeDamage(90);
	t2.takeDamage(30);
	t2.beRepaired(120);
	t2.vaulthunter_dot_exe("Jack");
	t2.rangedAttack("Steave");
	t2.meleeAttack("Max");

}
