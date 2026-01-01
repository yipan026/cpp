/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:58:37 by yipan             #+#    #+#             */
/*   Updated: 2026/01/01 11:36:34 by yipan            ###   ########.fr       */
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
	Zombie();
	~Zombie();
	
	void announce(void);
	void zombieName(const std::string& n);
};

Zombie* zombieHorde(int N, std::string name);

#endif