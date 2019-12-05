/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:28:01 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/05 16:54:18 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP
#define NINJATRAP

#include "header.hpp"

class NinjaTrap : public virtual ClapTrap
{
public:
	NinjaTrap();
	~NinjaTrap();
	NinjaTrap(std::string str);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void ninjaShoebox(const FragTrap &ft);
	void ninjaShoebox(const NinjaTrap &nt);
	void ninjaShoebox(const ScavTrap &st);
};

#endif
