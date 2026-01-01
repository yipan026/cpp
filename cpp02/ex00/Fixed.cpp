/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:24:17 by yipan             #+#    #+#             */
/*   Updated: 2026/01/01 12:34:04 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
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
