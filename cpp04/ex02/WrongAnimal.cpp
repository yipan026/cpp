/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:05:32 by yipan             #+#    #+#             */
/*   Updated: 2026/01/16 12:59:08 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

AWrongAnimal::AWrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

AWrongAnimal::AWrongAnimal(const AWrongAnimal& other)
	: _type(other._type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

AWrongAnimal&	AWrongAnimal::operator=(const AWrongAnimal& other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

AWrongAnimal::~AWrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

//member funcs
void	AWrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal Sound" << std::endl;
}

std::string	AWrongAnimal::getType() const
{
	return (_type);
}

void	AWrongAnimal::setType(const std::string& type)
{
	_type = type;
}