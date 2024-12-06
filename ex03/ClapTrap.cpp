/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:27:22 by qtay              #+#    #+#             */
/*   Updated: 2024/11/07 19:22:18 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap &obj)
{
	if (this != &obj)
	{
		_name = obj._name;
		_hitPoints = obj._hitPoints;
		_energyPoints = obj._energyPoints;
		_attackDamage = obj._attackDamage;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout << this->_name << " is dead\n";
	}
	else
	{
		std::cout << this->_name << " just took " << amount << " amount of damage!\n";
		this->_hitPoints -= amount;
	}
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints)
	{
		std::cout << "ClapTrap: " << this->_name << " just attacked " << target << "!\n";
		this->_energyPoints--;
	}
	else
		std::cout << this->_name << "does not have enough energy to attack!\n";
}

/**
 * Some ppl add dmg points when repair
 */
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << this->_name << " is already dead and cannot be repaired!\n";
	else if (this->_energyPoints)
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << this->_name << " just repaired itself by " << amount << " HP" << std::endl;
	}
	else
		std::cout << this->_name << "do not have enough energy to repair itself!\n";
}

void	ClapTrap::getStatus(void)
{
	std::cout << "NAME: " << this->_name << std::endl;
	std::cout << "HP  : " << this->_hitPoints << std::endl;
	std::cout << "EP  : " << this->_energyPoints << std::endl;
	std::cout << "DMG : " << this->_attackDamage << std::endl;
}

void	ClapTrap::setDamage(unsigned int amount)
{
	this->_attackDamage = amount;
	std::cout << this->_name << "'s damage is set to " << this->_attackDamage << std::endl;
}

unsigned int	ClapTrap::getDamage(void)
{
	return (this->_attackDamage);
}
