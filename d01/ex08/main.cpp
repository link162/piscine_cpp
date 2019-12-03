/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 14:35:11 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 15:58:01 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void)
{
	Human karl;

	karl.action("melee", "zombie");
	karl.action("ranged", "mutant");
	karl.action("intimidating", "snork");
}
