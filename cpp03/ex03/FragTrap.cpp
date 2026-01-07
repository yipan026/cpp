/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 13:00:17 by yipan             #+#    #+#             */
/*   Updated: 2026/01/03 13:17:39 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setHitPoints(30);
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

//member functions
void	FragTrap::highFivesGuys(void)
{
	if (this->getEnergyPoints() > 0)
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "positive high-fives" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->getName()
			<< "is out of energy" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << "FragTrap " << this->getName()
			<< " is dead" << std::endl;
		return ;
	}
	if (this->getEnergyPoints() > 0)
	{
		int	value = this->getEnergyPoints() - 1;
		this->setEnergyPoints(value);
		std::cout << "FragTrap " << this->getName()
			<< " attacks " << target << ", causing "
			<< this->getAttackDamage() << " points of damage!"
			<< std::endl;
	}
	else
		std::cout << "FragTrap " << this->getName()
			<< " is out of energy" << std::endl;
}
