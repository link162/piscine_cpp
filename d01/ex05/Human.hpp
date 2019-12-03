/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:17:22 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 11:39:56 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN
#define HUMAN
#include "Brain.hpp"

class Human
{
	Brain mind;
	public:
	std::string identify();
	Brain &getBrain();
};

#endif
