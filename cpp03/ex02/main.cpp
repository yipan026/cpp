/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 13:17:53 by yipan             #+#    #+#             */
/*   Updated: 2026/01/03 13:23:04 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	a( "Player1");

	for (int i = 0; i < 101; i++)
		a.highFivesGuys();
	
	FragTrap	b("Player2");
	b.highFivesGuys();
	b = a;
	b.highFivesGuys();
	return (0);
}