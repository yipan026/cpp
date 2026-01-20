/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:41:06 by yipan             #+#    #+#             */
/*   Updated: 2026/01/20 14:41:20 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class Intern
{
	private:
	public:
		Intern();
		Intern(const std::string& name, const std::string& target);
		Intern(const Intern& other);
		Intern&	operator=(const Intern& other);
		~Intern();

		//member funcs
		AForm*	makeForm(const std::string& name, const std::string& target) const;
		AForm*	createPresidentialForm(const std::string& target);
		AForm*	createRobotomyForm(const std::string& target);
		AForm*	createShrubberyForm(const std::string& target);
};

#endif