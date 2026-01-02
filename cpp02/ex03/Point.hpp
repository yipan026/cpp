/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 13:24:40 by yipan             #+#    #+#             */
/*   Updated: 2026/01/02 15:50:39 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed	_y;
public:
	Point();//default
	Point(const float x, const float y);//float constructor
	Point(const Point& other);//copy constructor
	Point& operator=(const Point& other);//MUST NOT try to assign const members
	~Point();

	//getters
	float	getX(void) const;
	float	getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
float	cross(Point const& A, Point const& B, Point const& P);

#endif