/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:49:14 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/05 14:53:34 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(void)
{
	ClapTrap();
	ClapTrap t1("Charly");
	t1.takeDamage(90);
	t1.takeDamage(30);
	t1.beRepaired(120);
	ClapTrap t2(t1);
	t2 = t1;
	ScavTrap();
	ScavTrap s1("Steave");
	s1.rangedAttack("Zombie");
	s1.meleeAttack("Mutant");
	s1.takeDamage(90);
	s1.takeDamage(30);
	s1.beRepaired(120);
	s1.challengeNewcomer();
	s1.challengeNewcomer();
	s1.challengeNewcomer();
	s1.challengeNewcomer();
	s1.challengeNewcomer();
	s1.challengeNewcomer();
	ScavTrap s2(s1);
	s2 = s1;
	s1.challengeNewcomer();
	FragTrap();
	FragTrap f1("Frank");
	f1.rangedAttack("Zombie");
	f1.meleeAttack("Mutant");
	f1.takeDamage(90);
	f1.takeDamage(30);
	f1.beRepaired(120);
	f1.vaulthunter_dot_exe("snork");
	f1.vaulthunter_dot_exe("kontroller");
	f1.vaulthunter_dot_exe("dog");
	f1.vaulthunter_dot_exe("spy");
	f1.vaulthunter_dot_exe("snake");
	FragTrap f2(f1);
	f2 = f1;
	f2.vaulthunter_dot_exe("Jake");
	NinjaTrap();
	NinjaTrap n1("Leonardo");
	n1.takeDamage(90);
	n1.takeDamage(30);
	n1.beRepaired(120);
	NinjaTrap n2(n1);
	n2 = n1;
	n1.ninjaShoebox(s1);
	n1.ninjaShoebox(f1);
	n1.ninjaShoebox(n2);
}
