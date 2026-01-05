/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:07:23 by yipan             #+#    #+#             */
/*   Updated: 2026/01/05 11:30:08 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
	: _type(other._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

//member funcs
void	Animal::makeSound() const
{
	std::cout << "Unknow Animal Sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (_type);
}

void	Animal::setType(const std::string& type)
{
	_type = type;
}
