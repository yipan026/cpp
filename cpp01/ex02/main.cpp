/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 14:20:35 by yipan             #+#    #+#             */
/*   Updated: 2025/12/31 10:56:04 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string	*stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Mem addr of str:" << &str << std::endl;
	std::cout << "Mem addr hold by stringPTR:" << stringPTR << std::endl;
	std::cout << "Mem addr hold by stringREF:" << &stringREF << std::endl;
	std::cout << "Value of str:" << str << std::endl;
	std::cout << "Value pointed to by stringPTR" << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF" << stringREF << std::endl;
	return (0);
}