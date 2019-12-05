/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:28:01 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/05 15:59:28 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP
#define SUPERTRAP

#include "header.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
public:
	SuperTrap();
	~SuperTrap();
	SuperTrap(std::string str);
};

#endif
