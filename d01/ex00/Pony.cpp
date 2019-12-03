/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:43:57 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/02 17:16:18 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void Pony::say_hello()
{
	std::cout << "Hello guys, my name " << name << ", I am " << " years old, and have " << color << " color!" << std::endl;
}

Pony::Pony(std::string name, std::string color, int years)
{
	this->name = name;
	this->color = color;
	this->years = years;
}

Pony::~Pony()
{
	std::cout << "Hello guys, my name is " << name << ", I am dying now(" << std::endl;
}

void ponyOnTheHeap(std::string name, std::string color, int years)
{
	Pony *p1 = new Pony(name, color, years);
	p1->say_hello();
	delete p1;
}

void ponyOnTheStack(std::string name, std::string color, int years)
{
	Pony p2(name, color, years);
	p2.say_hello();
}
