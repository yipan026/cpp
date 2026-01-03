/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 10:35:42 by yipan             #+#    #+#             */
/*   Updated: 2026/01/03 11:38:10 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a("Player1");
	
	a.attack("Player2");
	a.takeDamage(5);
	a.beRepaired(5);

	for (int i = 0; i < 20; i++)
		a.attack("Player3");
	return (0);
}