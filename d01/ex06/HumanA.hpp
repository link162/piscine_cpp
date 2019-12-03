/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 12:02:08 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 12:54:58 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
#define HUMANA
#include "Weapon.hpp"

class HumanA
{
	std::string name;
	Weapon &weapon;
	public:
	HumanA(std::string name, Weapon &club);
	void attack();
};

#endif
