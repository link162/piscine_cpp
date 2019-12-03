/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:01:51 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 11:33:43 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN
#define BRAIN
#include <iostream>
#include <sstream>
#include <string>

class Brain
{
	int iq;
	public:
	Brain(int i);
	Brain();
	std::string identify();
};


#endif
