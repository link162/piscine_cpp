/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 20:36:57 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/04 14:39:25 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;
Fixed::Fixed() : val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(i << bits);
}

Fixed::Fixed(float const i)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(i * (1 << bits)));
}

Fixed::Fixed(const Fixed &old)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = old;
}

Fixed &Fixed::operator = (Fixed const &old)
{
	std::cout << "Assignation operator called" << std::endl;
	this->val = old.getRawBits();
	return *this;
}

Fixed Fixed::operator + (Fixed const &old) const
{
	return Fixed(toFloat() + old.toFloat());
}

Fixed Fixed::operator - (Fixed const &old) const
{
	return Fixed(toFloat() - old.toFloat());
}

Fixed Fixed::operator * (Fixed const &old) const
{
	return Fixed(toFloat() * old.toFloat());
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

std::ostream &operator << (std::ostream &op, Fixed const &old)
{
	op << old.toFloat();
	return op;
}
