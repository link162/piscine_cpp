/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:41:12 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 10:40:25 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>

class Zombie
{
	std::string name;
	std::string type;
public:
	Zombie(std::string name, std::string type);
	Zombie();
	void set_name_type(std::string name, std::string type);
	void announce();
};

#endif
