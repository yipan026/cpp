/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 14:50:58 by yipan             #+#    #+#             */
/*   Updated: 2025/12/31 15:14:37 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

static int	is_error(const std::string& msg)
{
	std::cerr << "Error: " << msg << std::endl;
	return (1);
}
static int	find_code(const std::string& level)
{
	if (level == "DEBUG")
		return (0);
	else if (level == "INFO")
		return (1);
	else if (level == "WARNING")
		return (2);
	else if (level == "ERROR")
		return (3);
	return (4);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (is_error("Wrong arguments"));
	
	int	code = find_code(argv[1]);
	Harl	harl;
	
	switch (code)
	{
		case 0:
			harl.complain("DEBUG");
			//fall through
		case 1:
			harl.complain("INFO");
			//fall through
		case 2:
			harl.complain("WARNING");
			//fall through
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << " [ Probably complaining about insignificant problems ]"
				<< std::endl;
	}
	return (0);
}
