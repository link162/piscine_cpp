/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:04:41 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 11:38:05 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(int i)
{
	iq = i;
}
Brain::Brain()
{
}

std::string Brain::identify()
{
	const void * address = static_cast<const void*>(this);
	std::stringstream ss;
	ss << address;  
	std::string name = ss.str(); 
	return name;
}
