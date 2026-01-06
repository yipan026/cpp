/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 09:54:47 by yipan             #+#    #+#             */
/*   Updated: 2026/01/06 17:28:28 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(0) {}

Bureaucrat::Bureaucrat(const std::string& name, const int grade)
	: _name(name), _grade(grade)
{
	std::cout << "Bureaucrat Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
	: _name(other._name), _grade(other._grade)
{
	std::cout << "Bureaucrat Copy Constructor" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		_name = other._name;
		_grade = 
	}
}
~Bureaucrat();
//member funcs
std::string	getName() const;
int			getGrade() const;

virtual	const char* what() const throw();
virtual	const char* what() const throw();

std::ostream &operator<<(std::ostream &out, const Bureaucrat& a)
{
	out << a.getName() << ",  bureaucrat grade "
		<< a.getGrade() << "." << std::endl;
}
