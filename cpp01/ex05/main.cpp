/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 13:00:13 by yipan             #+#    #+#             */
/*   Updated: 2025/12/31 14:46:51 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main()
{
	Harl	harl;
	
    std::cout << "[ DEBUG ]" << std::endl;
    harl.complain("DEBUG");
    std::cout << "[ WARNING ]" << std::endl;
    harl.complain("WARNING");
	std::cout << "[ INFO ]" << std::endl;
	harl.complain("INFO");
	std::cout << "[ ERROR ]" << std::endl;
	harl.complain("ERROR");
    std::cout << "[ UNKNOWN ]" << std::endl;
    harl.complain("UNKNOWN");

	return (0);
}
