/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 13:09:39 by yipan             #+#    #+#             */
/*   Updated: 2026/01/05 13:13:28 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	private:
		std::string	_type;
	public:
		AAnimal();
		AAnimal(const AAnimal& other);
		AAnimal&	operator=(const AAnimal& other);
		virtual	~AAnimal();
		//member funcs
		virtual void	makeSound() const = 0;

		//getter setter
		std::string	getType() const;
		void		setType(const std::string& type);
};

#endif