/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:43:17 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 11:58:38 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType()
{
	const std::string &ret = type;
	return ret;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::Weapon(std::string str)
{
	type = str;
}

Weapon::Weapon() {}
