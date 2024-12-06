/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:17:12 by qtay              #+#    #+#             */
/*   Updated: 2024/11/08 14:59:00 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

/**
 * To prevent DiamondTrap from inheriting two separate ClapTrap instances (one
 * from FragTrap and one from ScavTrap), we derive ScavTrap using the "virtual"
 * keyword.
 * 
 * [ READ FRAGTRAP_HPP FIRST ]
 * Now we call the ScavTrap constructor in DiamondTrap. But since they share the
 * same ClapTrap instance, the member variable values in ClapTrap (which stored
 * FragTrap's) are gonna be overwritten by ScavTrap's.
 * 
 * Because of this, we cannot assign DiamondTrap's member variable directly to
 * values in the original ClapTrap. We have to rely on static const values.
 */class	ScavTrap: virtual public ClapTrap
{
	protected:
		static const unsigned int	_defaultHitPoints = 100;
		static const unsigned int	_defaultEnergyPoints = 50;
		static const unsigned int	_defaultAttackDamage = 20;

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &obj);
		ScavTrap	&operator=(ScavTrap &obj);
		~ScavTrap();

		void	attack(const std::string& target);
	    void	guardGate(void);
};

#endif
