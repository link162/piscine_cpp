/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 20:36:57 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/04 17:34:17 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;
Fixed::Fixed() : val(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(int const i) { setRawBits(i << bits); }

Fixed::Fixed(float const i) { setRawBits(roundf(i * (1 << bits))); }

Fixed::Fixed(const Fixed &old){ *this = old; }

Fixed &Fixed::operator = (Fixed const &old)
{
	this->val = old.getRawBits();
	return *this;
}

Fixed Fixed::operator * (Fixed const &old) const
{
	return Fixed(toFloat() * old.toFloat());
}

Fixed Fixed::operator + (Fixed const &old) const
{
	return Fixed(toFloat() + old.toFloat());
}

Fixed Fixed::operator - (Fixed const &old) const
{
	return Fixed(toFloat() - old.toFloat());
}

Fixed Fixed::operator / (Fixed const &old) const
{
	return Fixed(toFloat() / old.toFloat());
}

bool Fixed::operator < (Fixed const &old) const
{
	return (toFloat() < old.toFloat());
}

bool Fixed::operator > (Fixed const &old) const
{
	return (toFloat() > old.toFloat());
}

bool Fixed::operator <= (Fixed const &old) const
{
	return (toFloat() <= old.toFloat());
}

bool Fixed::operator >= (Fixed const &old) const
{
	return (toFloat() >= old.toFloat());
}

bool Fixed::operator == (Fixed const &old) const
{
	return (toFloat() == old.toFloat());
}

bool Fixed::operator != (Fixed const &old) const
{
	return (toFloat() != old.toFloat());
}

Fixed &Fixed::operator ++ ()
{
	this->val++;
	return *this;
}

Fixed &Fixed::operator -- ()
{
	this->val--;
	return *this;
}

Fixed Fixed::operator ++ (int)
{
	Fixed ret = *this;
	++this->val;
	return ret;
}

Fixed Fixed::operator -- (int)
{
	Fixed ret = *this;
	++this->val;
	return ret;
}

float Fixed::toFloat()const
{
	return (float)getRawBits() / (1 << bits);
}

int Fixed::toInt()const
{
	return getRawBits() >> bits;
}

int Fixed::getRawBits() const
{
	return val;
}

void Fixed::setRawBits(int const raw)
{
	val = raw;
}

Fixed &Fixed::max(Fixed &v1, Fixed &v2)
{
	return v1 > v2 ? v1 : v2;
}

const Fixed &Fixed::max(Fixed const &v1, Fixed const &v2)
{
	return v1 > v2 ? v1 : v2;
}

Fixed &Fixed::min(Fixed &v1, Fixed &v2)
{
	return v1 < v2 ? v1 : v2;
}

const Fixed &Fixed::min(const Fixed &v1, const Fixed &v2)
{
	return v1 < v2 ? v1 : v2;
}

std::ostream &operator << (std::ostream &op, Fixed const &old)
{
	op << old.toFloat();
	return op;
}
