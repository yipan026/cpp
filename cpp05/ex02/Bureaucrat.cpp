/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 09:54:47 by yipan             #+#    #+#             */
/*   Updated: 2026/01/20 14:28:18 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name, const int grade)
	: _name(name), _grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	std::cout << "Bureaucrat Default Constructor" << std::endl;
	std::cout << "Bureaucrat: " << name << "| Grade: "
		<< grade << std::endl;
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
		_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Default Destructor" << std::endl;
}

//member funcs
std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade(const int nGrade)
{
	if (nGrade < 0)
		throw NewGradeInvalid();
	if (_grade - nGrade < 1)
		throw GradeTooHighException();
	_grade -= nGrade;
}

void		Bureaucrat::decrementGrade(const int nGrade)
{
	if (nGrade < 0)
		throw NewGradeInvalid();
	if (_grade + nGrade > 150)
		throw GradeTooLowException();
	_grade += nGrade;
}

void	Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed "
			<< form.getName() << std::endl;

	}
	catch (const std::exception& e)
	{
		std::cout << _name << " couldn't sign "
			<< form.getName() << " because "
			<< e.what() << std::endl;
	};
}

void	Bureaucrat::executeForm(AForm const& form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName()
			<< std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << _name << " failed to execute "
			<< form.getName()  << "beacuse "
			<< e.what() << std::endl;
	};
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too Low");
}

const char* Bureaucrat::NewGradeInvalid::what() const throw()
{
	return ("Negative input not allowed");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat& a)
{
	out << a.getName() << ",  bureaucrat grade "
		<< a.getGrade() << "." << std::endl;
}
