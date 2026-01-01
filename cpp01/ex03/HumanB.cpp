/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:43:47 by yipan             #+#    #+#             */
/*   Updated: 2026/01/01 11:38:50 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name) : _name(name) {}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack() const
{
	if (_weapon)
		std::cout << _name << " attacks with their "
			<< _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon" << std::endl;
}
