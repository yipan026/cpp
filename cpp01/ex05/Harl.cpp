/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 13:00:06 by yipan             #+#    #+#             */
/*   Updated: 2026/01/01 11:40:27 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

void Harl::_debug(void)
{
	std::cout << "Debug: I love having extra bacon for my burger." 
		<< std::endl;
}

void Harl::_info(void)
{
	std::cout << "Info: I cannot believe adding extra bacon costs more money."
		 << std::endl;
}
void Harl::_warning(void)
{
	std::cout << "Warning: I think I deserve to have some extra bacon for free."
		<< std::endl;
}

void Harl::_error(void)
{
	std::cout << "Error: This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}


void Harl::complain(std::string level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*funcs[])(void) = 
	{
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error,
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