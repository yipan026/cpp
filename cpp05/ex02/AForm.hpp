/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:50:14 by yipan             #+#    #+#             */
/*   Updated: 2026/01/20 14:37:31 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <fstream>
# include <string>
# include "Bureaucrat.hpp"

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;

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
		class FormNotSigned : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

	public:
		AForm();
		AForm(const std::string& name, bool sign,
			int signGrade, int execGrade);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm();

		//member func
		void	beSigned(const Bureaucrat& bureau);

				std::string	getName() const;
		bool		getSignStatus() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
			
		virtual void	execute(Bureaucrat const& executor) const;
		virtual void	localExec() const = 0;
};

std::ostream&	operator<<(std::ostream& out, const AForm& a);

#endif