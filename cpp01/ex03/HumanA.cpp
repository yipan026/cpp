/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:43:40 by yipan             #+#    #+#             */
/*   Updated: 2025/12/31 11:42:59 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& _name, Weapon& _weapon)
	: name(_name), weapon(_weapon)	{}

void HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType()
		<< std::endl;
}
