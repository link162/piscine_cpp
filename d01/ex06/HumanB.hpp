/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 12:02:08 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 13:14:43 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB
#define HUMANB
#include "Weapon.hpp"

class HumanB
{
	std::string name;
	Weapon *weapon;
	public:
	HumanB(std::string name);
	void attack();
	void setWeapon(Weapon &club);
};

#endif
