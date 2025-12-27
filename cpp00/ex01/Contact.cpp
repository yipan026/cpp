/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 10:59:17 by yipan             #+#    #+#             */
/*   Updated: 2025/12/27 12:53:14 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

void Contact::setContact()
{
	std::cout << "First Name: ";
	std::getline(std::cin, firstName);
	std::cout << "Last Name: ";
	std::getline(std::cin, lastName);
	std::cout << "Nick Name: ";
	std::getline(std::cin, nickName);
	std::cout << "Phone Number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkestSecret);
}

void Contact::display_Sum(int index) const
{
	std::cout << std::setw(10) << index << "|";
	if (firstName.length() > 10)
		std::cout << firstName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << firstName << "|";
	if (lastName.length() > 10)
		std::cout << lastName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << lastName << "|";
	if (nickName.length() > 10)
		std::cout << nickName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << nickName << "|";
	std::cout << std::endl;//print
}

void Contact::display_All() const
{
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nick Name: " << nickName << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
