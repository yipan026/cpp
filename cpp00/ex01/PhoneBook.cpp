/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:49:10 by yipan             #+#    #+#             */
/*   Updated: 2025/12/30 12:52:35 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

PhoneBook::PhoneBook() : count(0) {}

void PhoneBook::addContact()
{
	contacts[count % 8].setContact();
	count++;
}

void PhoneBook::searchContact() const
{
	int total = (count < 8) ? count : 8;
	
	if (total == 0)
	{
		std::cout << "PhoneBook is empty." << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < total; i++)
		contacts[i].display_Sum(i);
	
	std::string input;
	int			index = -1;
	
	std::cout << "Enter index: ";
	std::getline(std::cin, input);
	try
	{
		index = std::stoi(input);
	}
	catch(...)
	{
		index = -1;
	}
	if (index >= 0 && index < total)
		contacts[index].display_All();
	else
		std::cout << "Invalid index." << std::endl;
}
