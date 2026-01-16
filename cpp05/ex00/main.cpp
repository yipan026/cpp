/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 09:54:41 by yipan             #+#    #+#             */
/*   Updated: 2026/01/16 14:48:26 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	A;
	Bureaucrat	B("John", 140);
	Bureaucrat	C("Thomas", 5);
	Bureaucrat	cheat(C);
	Bureaucrat	copy;

	copy = B;
	
}