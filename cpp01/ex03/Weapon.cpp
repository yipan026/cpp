/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:43:56 by yipan             #+#    #+#             */
/*   Updated: 2025/12/31 11:37:52 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(const std::string& _weaponType) : type(_weaponType) {}

const std::string& Weapon::getType() const
{
	return (type);
}

void Weapon::setType(const std::string& newType)
{
	type = newType;
}
