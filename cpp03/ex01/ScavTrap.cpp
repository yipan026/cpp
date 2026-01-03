/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 11:44:33 by yipan             #+#    #+#             */
/*   Updated: 2026/01/03 12:36:41 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

/*
Letting the base class handle its own copying means:
-Base class invariants stay intact
-No code duplication
-Changes to ClapTrap don’t break ScavTrap
*/
ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

//member
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName()
		<< " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << "ScavTrap " << this->getName()
			<< " is dead" << std::endl;
		return ;
	}
	if (this->getEnergyPoints() > 0)
	{
		int	value = this->getEnergyPoints() - 1;
		this->setEnergyPoints(value);
		std::cout << "ScavTrap " << this->getName()
			<< " attacks " << target << ", causing "
			<< this->getAttackDamage() << " points of damage!"
			<< std::endl;
	}
	else
		std::cout << "ScavTrap " << this->getName()
			<< " is out of energy" << std::endl;
}
