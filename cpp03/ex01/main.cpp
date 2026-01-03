/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 10:35:42 by yipan             #+#    #+#             */
/*   Updated: 2026/01/03 12:39:19 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	a("Player1");

	for (int i = 0; i < 51; i++)
		a.attack("Player2");
	a.guardGate();

	// a.beRepaired(2);
	// a.takeDamage(2);
	
	return (0);
}