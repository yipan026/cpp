/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:43:40 by yipan             #+#    #+#             */
/*   Updated: 2026/01/01 11:39:31 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon)
	: _name(name), _weapon(weapon)	{}

void HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _weapon.getType()
		<< std::endl;
}
