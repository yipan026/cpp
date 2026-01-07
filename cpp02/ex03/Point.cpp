/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 13:24:37 by yipan             #+#    #+#             */
/*   Updated: 2026/01/02 13:46:07 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y)//float constructor
	: _x(x), _y(y) {}

Point::Point(const Point& other)//copy constructor
	: _x(other._x), _y(other._y) {}

Point& Point::operator=(const Point& other)//copy assignment overload
{
	(void)other;
	return (*this);
}

Point::~Point()
{
	return ;
}

float	Point::getX(void) const
{
	return (_x.toFloat());
}

float	Point::getY(void) const
{
	return (_y.toFloat());
}
