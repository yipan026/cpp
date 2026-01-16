/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:50:17 by yipan             #+#    #+#             */
/*   Updated: 2026/01/16 15:17:52 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), _signed(false), _signGrade(1),
	_execGrade(1) {}

Form::Form(const std::string& name, bool sign,
	int signGrade, int execGrade) : _name(name),
	_signed(sign), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form Default Constructor" << std::endl;
}

Form(const Form& other);

Form& operator=(const Form& other);

~Form();

//member func
void	beSigned(const Bureaucrat& bureau)

//getter
std::string	getName() const;

bool		getSignStatus() const;

int			getSignGrade() const;

int			getExecGrade() const;

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form grade too high");
}

const char* Form::GradeTooLowException::what() const throw();

std::ostream&	operator<<(std::ostream& out, const Form& a);