/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:24:17 by yipan             #+#    #+#             */
/*   Updated: 2026/01/01 15:05:29 by yipan            ###   ########.fr       */
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


//new funcs
bool Fixed::operator>(const Fixed& n) const
{
	return (_value > n._value);
}

bool Fixed::operator<(const Fixed& n) const
{
	return (_value < n._value);
}

bool Fixed::operator>=(const Fixed& n) const
{
	return (_value >= n._value);
}

bool Fixed::operator<=(const Fixed& n) const
{
	return (_value <= n._value);
}

bool Fixed::operator==(const Fixed& n) const
{
	return (_value == n._value);
}

bool Fixed::operator!=(const Fixed& n) const
{
	return (_value != n._value);
}

//4 arithmetic operators----create new objects
Fixed Fixed::operator+(const Fixed& n) const
{
	return (Fixed(this->toFloat() + n.toFloat()));
}

Fixed Fixed::operator-(const Fixed& n) const
{
	return (Fixed(this->toFloat() - n.toFloat()));
}

Fixed Fixed::operator*(const Fixed& n) const
{
	return (Fixed(this->toFloat() * n.toFloat()));
}

Fixed Fixed::operator/(const Fixed& n) const
{
	if (n._value == 0)
	{
		std::cout << "Error: Division by 0 forbidden." << std::endl;
		return (Fixed(-1));
	}
	return (Fixed(this->toFloat() / n.toFloat()));
}

//4 increment/decrement
Fixed& Fixed::operator++()//pre-incre
{
	_value++;
	return (*this);
}

Fixed& Fixed::operator--()//pre-decre
{
	_value--;
	return (*this);
}

Fixed Fixed::operator++(int)//post-incre, return a copy
{
	Fixed tmp(*this);
	_value++;
	return (tmp);
}
Fixed Fixed::operator--(int)//post-decre
{
	Fixed tmp(*this);
	_value--;
	return (tmp);
}

//overloaded member functions
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b ? a : b);
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b ? a : b);
}
