/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:33:11 by qtay              #+#    #+#             */
/*   Updated: 2024/11/08 14:42:30 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FragTrap")
{
	this->_hitPoints = this->_defaultHitPoints;
	this->_energyPoints = this->_defaultEnergyPoints;
	this->_attackDamage = this->_defaultAttackDamage;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = this->_defaultHitPoints;
	this->_energyPoints = this->_defaultEnergyPoints;
	this->_attackDamage = this->_defaultAttackDamage;
    std::cout << "FragTrap parameterized constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap &obj)
{
	if (this != &obj)
	{
		_name = obj._name;
		_hitPoints = obj._hitPoints;
		_energyPoints = obj._energyPoints;
		_attackDamage = obj._attackDamage;
	}
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}
void	FragTrap::attack(const std::string& target)
{
	if (this->_energyPoints)
	{
		std::cout << "FragTrap: " << this->_name << " just attacked " << target << "!\n";
		this->_energyPoints--;
	}
	else
		std::cout << "FragTrap: " << this->_name << "does not have enough energy to attack!\n";
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap: " << this->_name << " would like to high five :D\n";
}
