/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:18:25 by qtay              #+#    #+#             */
/*   Updated: 2024/11/08 11:36:32 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/**
 * It's good practice to call the base class parameterized constructor to
 * initialize properly. Name will be set to "ScavTrap" immediately instead of
 * "ClapTrap" first (where the default constructor is called). HP/EP/DMG will
 * then be overridden by ScavTrap's.
 */
ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap")
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

/**
 * For a derived class, the base class must be initialized before the derived
 * class can initialize its own members. We need to explicitly call the base
 * class constructor as things may not work properly if the base class needs
 * specific initialization (-W).
 */
ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap &obj)
{
	if (this != &obj)
	{
		_name = obj._name;
		_hitPoints = obj._hitPoints;
		_energyPoints = obj._energyPoints;
		_attackDamage = obj._attackDamage;
	}
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}
void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints)
	{
		std::cout << "ScavTrap: " << this->_name << " just attacked " << target << "!\n";
		this->_energyPoints--;
	}
	else
		std::cout << "ScavTrap: " << this->_name << "does not have enough energy to attack!\n";
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap: " << this->_name << " is now in gatekeeper mode\n";
}
