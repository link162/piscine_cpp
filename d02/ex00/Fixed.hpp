/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 20:30:52 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/04 08:58:05 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
#define FIXED
#include <iostream>

class Fixed
{
	int val;
	static const int bits;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &old);
		Fixed &operator=(const Fixed &old);
		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif
