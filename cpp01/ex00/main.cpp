/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:58:51 by yipan             #+#    #+#             */
/*   Updated: 2025/12/30 13:45:57 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main()
{
	Zombie*	z1 = newZombie("Foo");
	Zombie	*z2 = newZombie("");
	z1->announce();
	z2->announce();
	delete (z1);
	delete (z2);

	randomChump("Eval");
	randomChump("");
	return (0);
}
