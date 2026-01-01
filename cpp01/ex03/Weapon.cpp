/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:43:56 by yipan             #+#    #+#             */
/*   Updated: 2026/01/01 11:37:24 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(const std::string& weaponType) : _type(weaponType) {}

const std::string& Weapon::getType() const
{
	return (_type);
}

void Weapon::setType(const std::string& newType)
{
	_type = newType;
}
