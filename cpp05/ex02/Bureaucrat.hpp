/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichipan <yichipan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 09:54:44 by yipan             #+#    #+#             */
/*   Updated: 2026/01/19 09:59:57 by yichipan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string& name, const int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat&	operator=(const Bureaucrat& other);
	~Bureaucrat();

	//member funcs
	std::string	getName() const;
	int			getGrade() const;
	void		incrementGrade(const int nGrade);
	void		decrementGrade(const int nGrade);
	void		signForm(Form& form);

	void	executeForm(AForm const& form);
	
	//exception
	class GradeTooHighException : public std::exception
	{
		public:
			virtual	const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual	const char* what() const throw();
	};
	class NewGradeInvalid : public std::exception
	{
		public:
			virtual	const char* what() const throw();
	};
};

//overload
std::ostream &operator<<(std::ostream &out, const Bureaucrat& a);

#endif