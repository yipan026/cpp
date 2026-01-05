/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:07:27 by yipan             #+#    #+#             */
/*   Updated: 2026/01/05 13:14:28 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	this->setType("Cat");
	_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
	this->setType(other.getType());
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
		this->setType(other.getType());
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
	delete (_brain);
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
