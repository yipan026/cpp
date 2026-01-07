/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:58:47 by yipan             #+#    #+#             */
/*   Updated: 2025/12/30 13:58:59 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	
	Zombie	*horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].zombieName(name);
	}
	return (horde);
}
