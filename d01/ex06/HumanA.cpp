/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 12:06:36 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 12:54:55 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string call, Weapon &club) : name(call), weapon(club)
{
	weapon = club;
	name = call;
}
void HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
