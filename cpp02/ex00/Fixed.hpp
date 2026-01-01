/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:24:20 by yipan             #+#    #+#             */
/*   Updated: 2026/01/01 13:47:12 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int	_value;
	static const int	_rawBits = 8;
public:
	Fixed(void);
	~Fixed();
	Fixed(const Fixed &other);
	Fixed& operator=(const Fixed& other);
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif