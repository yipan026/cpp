/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichipan <yichipan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:50:17 by yipan             #+#    #+#             */
/*   Updated: 2026/01/19 09:57:47 by yichipan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

AForm::AForm() : _name(""), _signed(false), _signGrade(1),
	_execGrade(1) {}

AForm::AForm(const std::string& name, bool sign,
	int signGrade, int execGrade) : _name(name),
	_signed(sign), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	else if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	std::cout << "Form Default Constructor" << std::endl;
}

AForm::AForm(const AForm& other) : _name(other._name),
	_signed(other._signed), _signGrade(other._signGrade),
	_execGrade(other._execGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
	if (this != other)
	{
		_signed = other._signed;
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << "Form Default Desctructor" << std::endl;
}

//member func
void	AForm::beSigned(const Bureaucrat& bureau)
{
	if (bureau._grade <= _signGrade)
		_signed = true;
	else
		throw GradeTooLowException();
}

void	AForm::execute(Bureaucrat const& executor) const
{
	if (!_signed)
		throw FormNotSigned();
	int	grade = executor.getGrade();
	if (grade <= _signGrade && grade <= _execGrade)
		throw GradeTooLowException();
	localExec();
}

//getter
std::string	AForm::getName() const
{
	return (_name);
}

bool	AForm::getSignStatus() const
{
	return (_signed);
}

int	AForm::getSignGrade() const
{
	return (_signGrade);
}

int	AForm::getExecGrade() const
{
	return (_execGrade);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Form grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Form grade too low");
}

const char* AForm::FormNotSigned::what() const throw()
{
	return ("Form has not been signed");
}

std::ostream&	operator<<(std::ostream& out, const AForm& a)
{
	out << "Form name: " << a._name << "| Form Grade: "
		<< a._grade << "| Form Sign Grade: "
		<< a._signGrade << "| Form Exec Grade: "
		<< a._execGrade << std::endl;
}
