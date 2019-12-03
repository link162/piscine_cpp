/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:44:37 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/02 17:15:18 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
#define PONY_H

#include <iostream>
#include <string>

class Pony
{
	std::string name;
	std::string color;
	int	years;
	public:
	void say_hello();
	Pony(std::string name, std::string color, int years);
	~Pony();
};

void ponyOnTheHeap(std::string name, std::string color, int years);
void ponyOnTheStack(std::string name, std::string color, int years);

#endif
