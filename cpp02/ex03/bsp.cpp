/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 13:24:31 by yipan             #+#    #+#             */
/*   Updated: 2026/01/02 15:59:05 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
      B(10,30)
       *
      / \
     /   \
    /     \
   A*-------*C(20,0)
         P(10,15)
	AB is the vector along the edge from A to B
	AP is the vector from A to P
*/
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	d1 = cross(a, b, point);
	float	d2 = cross(b, c, point);
	float	d3 = cross(c, a, point);
	
	if (d1 == 0 || d2 == 0 || d3 == 0)
		return (false);
	bool	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	if (has_neg && has_pos)
		return (false);
	return (true);
}

/*
2D cross product formula:
AB x AP = ABx * APy - ABy * APx

        y
        |
        |     B(xB,yB)
        |    *
        |
        | 
        |
        |   A(xA,yA)
        |  *
--------+---------------- x
       O(0,0)

   y
   |
   |       B
   |      *
   |     / 
   |    /  
   |   /  
   |  /  
   | /  
   |/    
   *----> x
   A

*/
float	cross(Point const& A, Point const& B, Point const& P)
{
	float	ABx = B.getX() - A.getX();
	float	ABy = B.getY() - A.getY();
	
	float	APx = P.getX() - A.getX();
	float	APy = P.getY() - A.getY();
	return (ABx * APy - ABy * APx);
}
