/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:24:23 by yipan             #+#    #+#             */
/*   Updated: 2026/01/02 15:49:52 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main( void )
{
	Point	a(0, 0);
	Point	b(10, 30);
	Point	c(20, 0);
	Point	p(10, 15);
	Point	s(30, 15);

	if (bsp(a, b, c, p))
		std::cout << "p is inside the triangle" << std::endl;
	else
		std::cout << "p is not inside the triangle" << std::endl;

	if (bsp(a, b, c, s))
		std::cout << "s is inside the triangle" << std::endl;
	else
		std::cout << "s is not inside the triangle" << std::endl;	
	return (0);
}
