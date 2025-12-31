/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:43:43 by yipan             #+#    #+#             */
/*   Updated: 2025/12/31 11:43:39 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{
private:
	std::string	name;
	Weapon& weapon;
public:
	HumanA(const std::string& _name, Weapon& _weapon);
	void attack() const;
};

#endif