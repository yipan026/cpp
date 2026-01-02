/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:24:20 by yipan             #+#    #+#             */
/*   Updated: 2026/01/01 14:18:41 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_value;
	static const int	_rawBits = 8;
public:
	Fixed(void);
	Fixed(const int n);
	Fixed(const float n);
	~Fixed();
	Fixed(const Fixed &other);
	Fixed& operator=(const Fixed& other);
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	//6 comparison operators
	bool operator>(const Fixed& n) const;
	bool operator<(const Fixed& n) const;
	bool operator>=(const Fixed& n) const;
	bool operator<=(const Fixed& n) const;
	bool operator==(const Fixed& n) const;
	bool operator!=(const Fixed& n) const;
	
	//4 arithmetic operators----create new objects
	Fixed operator+(const Fixed& n) const;
	Fixed operator-(const Fixed& n) const;
	Fixed operator*(const Fixed& n) const;
	Fixed operator/(const Fixed& n) const;
	
	//
	Fixed& operator++();//pre-incre
	Fixed& operator--();//pre-decre
	Fixed operator++(int);//post-incre, return a copy
	Fixed operator--(int);//post-decre
	
	//overloaded member functions
	static Fixed& min(Fixed& a, Fixed& b);
	const static Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	const static Fixed& max(const Fixed& a, const Fixed& b);
};

/*
  the overload of << tells std::cout or any std::ostream
how to print a "Fixed" object
*/
std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif