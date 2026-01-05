/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:04:43 by yipan             #+#    #+#             */
/*   Updated: 2026/01/05 11:55:42 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
	private:
	public:
		Cat();
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
		virtual	~Cat();

		virtual void	makeSound() const;
};

#endif