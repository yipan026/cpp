/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:58:41 by yipan             #+#    #+#             */
/*   Updated: 2026/01/01 11:36:49 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {};

Zombie::~Zombie()
{
	std::cout << _name << " is destroyed" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::zombieName(const std::string& n)
{
	_name = n;
}
