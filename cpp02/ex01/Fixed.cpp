/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:24:17 by yipan             #+#    #+#             */
/*   Updated: 2026/01/01 15:05:36 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>//for roundf

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _value(n << _rawBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _value(roundf(n * (1 << _rawBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : _value(other._value)
{
	std::cout << "Copy constructor called" << std::endl;
}

/*
Assignement operator: 
  this operator copies the content from an existing object 
to another existing object

"this" is a pointer, so the other side should be pointer as well
*/
Fixed& Fixed::operator = (const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &other)
		this->_value = other._value;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _rawBits));
}

int Fixed::toInt(void) const
{
	return (_value >> _rawBits);
}

/*
Convert the Fixed object to a float and insert it into the output stream
*/
std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}
