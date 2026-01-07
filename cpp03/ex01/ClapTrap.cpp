/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 10:41:13 by yipan             #+#    #+#             */
/*   Updated: 2026/01/06 15:13:24 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name): _name(name),
	_hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	: _name(other._name), _hitPoints(other._hitPoints),
	_energyPoints(other._energyPoints),
	_attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

//member funcs
void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name
			<< " is dead" << std::endl;
		return ;
	}
	if (_energyPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name
			<< " attacks " << target << ", causing "
			<< _attackDamage << " points of damage!"
			<< std::endl;
	}
	else
		std::cout << "ClapTrap " << _name
			<< " is out of energy" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name
			<< " is dead" << std::endl;
		return ;
	}
	_hitPoints -= amount;
	std::cout << "ClapTrap " << _name
			<< " takes " << amount
			<< " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name
			<< " is dead" << std::endl;
		return ;
	}
	if (_energyPoints > 0)
	{
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name
			<< " repairs " << amount
			<< " points of hitpoints" << std::endl;
		if (_hitPoints > 10)
			_hitPoints = 10;
	}
	else
		std::cout << "ClapTrap " << _name
			<< " is out of energy" << std::endl;
}

//setter
void	ClapTrap::setName(const std::string& name)
{
	_name = name;
}
void	ClapTrap::setHitPoints(const int value)
{
	_hitPoints = value;
}

void	ClapTrap::setEnergyPoints(const int value)
{
	_energyPoints = value;
}

void	ClapTrap::setAttackDamage(const int value)
{
	_attackDamage = value;
}

//getter
std::string	ClapTrap::getName() const
{
	return (_name);
}

int	ClapTrap::getHitPoints() const
{
	return (_hitPoints);
}

int	ClapTrap::getEnergyPoints() const
{
	return (_energyPoints);
}

int	ClapTrap::getAttackDamage() const
{
	return (_attackDamage);
}
