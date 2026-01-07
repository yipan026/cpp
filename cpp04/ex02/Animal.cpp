/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:07:23 by yipan             #+#    #+#             */
/*   Updated: 2026/01/05 13:13:56 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
	: _type(other._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (_type);
}

void	AAnimal::setType(const std::string& type)
{
	_type = type;
}
