/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:07:31 by yipan             #+#    #+#             */
/*   Updated: 2026/01/05 13:14:36 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	this->setType("Dog");
	_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
	this->setType(other.getType());
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	if (this != &other)
		this->setType(other.getType());
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
	delete (_brain);
}

void	Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}
