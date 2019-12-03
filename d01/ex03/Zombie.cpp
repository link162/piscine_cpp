/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:44:52 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 10:39:41 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

Zombie::Zombie()
{

}
void Zombie::set_name_type(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

void Zombie::announce()
{
	std::cout << name <<"(" << type << ") HHHHHHRRRROROOOOOORROR...." << std::endl;
}
