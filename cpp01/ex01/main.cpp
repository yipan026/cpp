/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:58:51 by yipan             #+#    #+#             */
/*   Updated: 2025/12/30 14:04:49 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main()
{
	// int	N = 0;
	// Zombie	*horde = zombieHorde(N, "Creeper");

	int	N = 5;
	Zombie	*horde = zombieHorde(N, "Walker");

	if (horde)
	{
		for (int i = 0; i < N; i++)
			horde->announce();
		delete[](horde);
	}
	else
		std::cout << "No zombies created." << std::endl;
}
