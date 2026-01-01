/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:58:37 by yipan             #+#    #+#             */
/*   Updated: 2026/01/01 11:35:30 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie(const std::string &name);
	~Zombie();
	
	void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif