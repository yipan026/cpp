/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 10:59:22 by yipan             #+#    #+#             */
/*   Updated: 2025/12/27 12:53:22 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private://elements
		std::string firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string darkestSecret;
	public://functions
	//setters
		void setContact();
		void display_Sum(int index) const;
		void display_All() const;
};

#endif