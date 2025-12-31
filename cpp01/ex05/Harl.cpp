/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 13:00:06 by yipan             #+#    #+#             */
/*   Updated: 2025/12/31 14:47:34 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

void Harl::debug(void)
{
	std::cout << "Debug: I love having extra bacon for my burger." 
		<< std::endl;
}

void Harl::info(void)
{
	std::cout << "Info: I cannot believe adding extra bacon costs more money."
		 << std::endl;
}
void Harl::warning(void)
{
	std::cout << "Warning: I think I deserve to have some extra bacon for free."
		<< std::endl;
}

void Harl::error(void)
{
	std::cout << "Error: This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}


void Harl::complain(std::string level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*funcs[])(void) = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*funcs[i])();
			return ;
		}
	}
}