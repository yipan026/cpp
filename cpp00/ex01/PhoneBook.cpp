/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:49:10 by yipan             #+#    #+#             */
/*   Updated: 2026/01/05 13:37:05 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook() : _count(0) {}

void PhoneBook::addContact()
{
	_contacts[_count % 8].setContact();
	_count++;
}

void PhoneBook::searchContact() const
{
	int total = (_count < 8) ? _count : 8;
	
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
		_contacts[i].display_Sum(i);
	
	std::string input;
	int			index = -1;
	
	std::cout << "Enter index: ";
	std::getline(std::cin, input);

	/*
	-ss is a std::stringstream object that contains 
	the string the user typed
	-The >> operator tries to extract an integer 
	from the stream and store it in index.
	-If fails the stream goes into a fail state,
	and ss >> index evaluates to false.
	*/
	std::stringstream	ss(input);
	if (!(ss >> index) || !(ss.eof()))
		index = -1;
	
	if (index >= 0 && index < total)
		_contacts[index].display_All();
	else
		std::cout << "Invalid index." << std::endl;
}
