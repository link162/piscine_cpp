/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 14:36:02 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 15:58:22 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const &target)
{
	std::cout << "Attack " << target << ", distance 10 meters!" << std::endl;
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << "Attack " << target << ", distance 500 meters!" << std::endl;
}

void Human::intimidatingShout(std::string const &target)
{
	std::cout << "Attack " << target << ", distance 1 meter!" << std::endl;
}

void Human::action(std::string const &action, std::string const &target)
{
	std::string actions[3] = {"melee", "ranged", "intimidating"};
	void (Human::*act_ptr[3])(std::string const &) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout}; 
	for (int i = 0; i < 3; i++)
		if (action == actions[i])
			(this->*act_ptr[i])(target);
}
