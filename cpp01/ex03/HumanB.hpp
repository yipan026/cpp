/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:43:50 by yipan             #+#    #+#             */
/*   Updated: 2026/01/01 11:38:17 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
private:
	std::string	_name;
	Weapon *_weapon;
public:
	HumanB(const std::string& name);
	void setWeapon(Weapon &weapon);
	void attack() const;
};

#endif