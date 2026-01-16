/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:05:46 by yipan             #+#    #+#             */
/*   Updated: 2026/01/16 13:00:40 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : AWrongAnimal()
{
	this->setType("WrongCat");
	_brain = new Brain();
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : AWrongAnimal(other)
{
	this->setType(other.getType());
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		this->setType(other.getType());
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
	delete (_brain);
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Meow" << std::endl;
}
