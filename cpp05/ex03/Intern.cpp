/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:41:36 by yipan             #+#    #+#             */
/*   Updated: 2026/01/20 14:41:43 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor" << std::endl;
}

Intern(const Intern& other)
{
	(void)other;
}

Intern&	operator=(const Intern& other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern Default Destructor" << std::endl;
}

//member funcs
AForm*	makeForm() const;


AForm*	Intern::createPresidentialForm(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::createRobotomyForm(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::createShrubberyForm(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}
