/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 20:30:52 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/04 13:32:43 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
#define FIXED
#include <iostream>
#include <cmath>

class Fixed
{
	int val;//An integer to store the fixed point value.
	static const int bits;//number of fractional bits
	public:
		Fixed();
		Fixed(int const i);
		Fixed(float const i);
		~Fixed();
		Fixed(const Fixed &old);
		Fixed &operator=(const Fixed &old);
		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat()const;
		int toInt()const;
};

std::ostream &operator << (std::ostream &op, Fixed const &old);

#endif
