/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:44:10 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 11:59:28 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
#define WEAPON
#include <iostream>

class Weapon
{
	std::string type;
	public:
	const std::string &getType();
	void setType(std::string type);
	Weapon(std::string str);
	Weapon();
};

#endif
