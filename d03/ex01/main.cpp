/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:49:14 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/04 21:16:20 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap t2("Lozer");
	t2.takeDamage(90);
	t2.takeDamage(30);
	t2.beRepaired(120);
	t2.vaulthunter_dot_exe("Jack");
	t2.vaulthunter_dot_exe("Jack");
	t2.vaulthunter_dot_exe("Jack");
	t2.vaulthunter_dot_exe("Jack");
	t2.vaulthunter_dot_exe("Jack");
	t2.rangedAttack("Steave");
	t2.meleeAttack("Max");
	ScavTrap t1("Killer");
	t1.takeDamage(90);
	t1.takeDamage(30);
	t1.beRepaired(120);
	t1.rangedAttack("Steave");
	t1.meleeAttack("Max");
	t1.challengeNewcomer();
	t1.challengeNewcomer();
	t1.challengeNewcomer();
	t1.challengeNewcomer();
	t1.challengeNewcomer();
	t1.challengeNewcomer();

}
