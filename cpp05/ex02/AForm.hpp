/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichipan <yichipan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:50:14 by yipan             #+#    #+#             */
/*   Updated: 2026/01/17 10:55:18 by yichipan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
	protected:
	
	public:
		AForm();
		AForm(const std::string& name, bool sign,
			int signGrade, int execGrade);
		AForm(const Form& other);
		AForm& operator=(const Form& other);
		~AForm();

		//member func
		void	beSigned(const Bureaucrat& bureau);
		
		//TODO
		virtual void	execute(Bureaucrat const& executor) const = 0;
		void	executeForm(AForm const& form);

		//getter
		std::string	getName() const;
		bool		getSignStatus() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		
		//interfaces
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const Form& a);

#endif