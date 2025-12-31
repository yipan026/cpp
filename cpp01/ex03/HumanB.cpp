/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:43:47 by yipan             #+#    #+#             */
/*   Updated: 2025/12/31 11:51:11 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& _name) : name(_name) {}

void HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
}

void HumanB::attack() const
{
	if (weapon)
		std::cout << name << " attacks with their "
			<< weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon" << std::endl;
}
