/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:28:01 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/05 16:54:01 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
#define FRAGTRAP

#include "header.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string str);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void vaulthunter_dot_exe(std::string const &target);
};

#endif
