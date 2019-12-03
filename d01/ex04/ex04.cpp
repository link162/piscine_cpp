/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:06:44 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/02 18:15:17 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string s1 = "HI THIS IS BRAIN";
	std::string *ptr = &s1;
	std::string &s1_copy = s1;
	std::cout << s1 << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << s1_copy << std::endl;
}
