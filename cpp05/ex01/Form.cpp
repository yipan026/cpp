/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:50:17 by yipan             #+#    #+#             */
/*   Updated: 2026/01/20 14:26:25 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), _signed(false), _signGrade(1),
	_execGrade(1) {}

Form::Form(const std::string& name, bool sign,
	int signGrade, int execGrade) : _name(name),
	_signed(sign), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	else if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	std::cout << "Form Default Constructor" << std::endl;
}

Form::Form(const Form& other) : _name(other._name),
	_signed(other._signed), _signGrade(other._signGrade),
	_execGrade(other._execGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
	{
		_signed = other._signed;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Form Default Desctructor" << std::endl;
}

//member func
void	Form::beSigned(const Bureaucrat& bureau)
{
	if (bureau.getGrade() <= _signGrade)
		_signed = true;
	else
		throw GradeTooLowException();
}

//getter
std::string	Form::getName() const
{
	return (_name);
}

bool	Form::getSignStatus() const
{
	return (_signed);
}

int	Form::getSignGrade() const
{
	return (_signGrade);
}

int	Form::getExecGrade() const
{
	return (_execGrade);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form grade too low");
}

std::ostream&	operator<<(std::ostream& out, const Form& a)
{
	out << "Form name: " << a.getName() << "| Form Status: "
		<< a.getSignStatus() << "| Form Sign Grade: "
		<< a.getSignGrade() << "| Form Exec Grade: "
		<< a.getExecGrade() << std::endl;
}
