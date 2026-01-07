/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 09:54:44 by yipan             #+#    #+#             */
/*   Updated: 2026/01/06 17:28:05 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat(/* args */);
	Bureaucrat(const std::string& name, const int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat&	operator=(const Bureaucrat& other);
	~Bureaucrat();

	//member funcs
	std::string	getName() const;
	int			getGrade() const;

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
};

//overload
std::ostream &operator<<(std::ostream &out, const Bureaucrat& a);

#endif