/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:03:24 by qtay              #+#    #+#             */
/*   Updated: 2024/11/08 14:45:54 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
	: ClapTrap("DiamondTrap_clap_trap"), FragTrap(), ScavTrap(), _name("DiamondTrap")
{
	this->_hitPoints = FragTrap::_defaultHitPoints;
	this->_energyPoints = ScavTrap::_defaultEnergyPoints;
	this->_attackDamage = FragTrap::_defaultAttackDamage;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

/**
 * DiamondTrap's member variables will hide/shadow other members from
 * ClapTrap, FragTrap, and ScavTrap when accessed directly within
 * DiamondTrap. In order to access it we need to use the scope resolution
 * operator ::.
 */
DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_trap"), FragTrap(name), ScavTrap(name), _name(name)
{
	this->_hitPoints = FragTrap::_defaultHitPoints;
	this->_energyPoints = ScavTrap::_defaultEnergyPoints;
	this->_attackDamage = FragTrap::_defaultAttackDamage;
    std::cout << "DiamondTrap parameterized constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
	:  ClapTrap(obj), FragTrap(obj), ScavTrap(obj), _name(obj._name)
{
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

/**
 * Calling the base class assignment operators is more robust as it allows
 * us to explicitly reassign base class members in the derived class
 * assignment operator.
 */
DiamondTrap	&DiamondTrap::operator=(DiamondTrap &obj)
{
	if (this != &obj)
	{
		ClapTrap::operator=(obj);
		FragTrap::operator=(obj);
		ScavTrap::operator=(obj);
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am DiamondTrap name: " << this->_name << " with ClapTrap name: " << ClapTrap::_name << "\n";
}

void	DiamondTrap::getStatus(void)
{
	std::cout << "NAME: " << this->_name << std::endl;
	std::cout << "HP  : " << this->_hitPoints << std::endl;
	std::cout << "EP  : " << this->_energyPoints << std::endl;
	std::cout << "DMG : " << this->_attackDamage << std::endl;
}
