/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:05:36 by yipan             #+#    #+#             */
/*   Updated: 2026/01/16 12:58:27 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class AWrongAnimal
{
	private:
		std::string _type;
	public:
		AWrongAnimal();
		AWrongAnimal(const AWrongAnimal& other);
		AWrongAnimal&	operator=(const AWrongAnimal& other);
		virtual	~AWrongAnimal();

		//member funcs
		virtual void	makeSound() const = 0;

		//getter setter
		std::string	getType() const;
		void		setType(const std::string& type);
};

#endif