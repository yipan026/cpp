/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 10:59:17 by yipan             #+#    #+#             */
/*   Updated: 2026/01/01 11:33:49 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

void Contact::setContact()
{
	std::cout << "First Name: ";
	std::getline(std::cin, _firstName);
	std::cout << "Last Name: ";
	std::getline(std::cin, _lastName);
	std::cout << "Nick Name: ";
	std::getline(std::cin, _nickName);
	std::cout << "Phone Number: ";
	std::getline(std::cin, _phoneNumber);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, _darkestSecret);
}

void Contact::display_Sum(int index) const
{
	std::cout << std::setw(10) << index << "|";
	if (_firstName.length() > 10)
		std::cout << _firstName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << _firstName << "|";
	if (_lastName.length() > 10)
		std::cout << _lastName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << _lastName << "|";
	if (_nickName.length() > 10)
		std::cout << _nickName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << _nickName << "|";
	std::cout << std::endl;//print
}

void Contact::display_All() const
{
	std::cout << "First Name: " << _firstName << std::endl;
	std::cout << "Last Name: " << _lastName << std::endl;
	std::cout << "Nick Name: " << _nickName << std::endl;
	std::cout << "Phone Number: " << _phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << _darkestSecret << std::endl;
}
