/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:24:20 by yipan             #+#    #+#             */
/*   Updated: 2026/01/01 13:47:18 by yipan            ###   ########.fr       */
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
};

/*
  the overload of << tells std::cout or any std::ostream
how to print a "Fixed" object
*/
std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif