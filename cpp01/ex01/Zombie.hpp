/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:58:37 by yipan             #+#    #+#             */
/*   Updated: 2025/12/30 13:57:10 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	~Zombie();
	
	void announce(void);
	void zombieName(const std::string& n);
};

Zombie* zombieHorde(int N, std::string name);

#endif