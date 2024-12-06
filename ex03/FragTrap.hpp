/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:32:07 by qtay              #+#    #+#             */
/*   Updated: 2024/11/08 14:57:30 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

/**
 * To prevent DiamondTrap from inheriting two separate ClapTrap instances (one
 * from FragTrap and one from ScavTrap), we derive FragTrap using the "virtual"
 * keyword.
 * 
 * In our DiamondTrap implementation, we call the FragTrap constructor first,
 * which in turn calls the ClapTrap constructor. This initializes the ClapTrap 
 * object with ClapTrap's values. Once that's done the body of the FragTrap
 * constructor runs, which initializes the HP/EP/DMG of ClapTrap into that of
 * FragTrap's thus "converting" it into a FragTrap object (not sure if this
 * is what exactly happens).
 */
class	FragTrap: virtual public ClapTrap
{
	protected:
		static const unsigned int	_defaultHitPoints = 100;
		static const unsigned int	_defaultEnergyPoints = 100;
		static const unsigned int	_defaultAttackDamage = 30;

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &obj);
		FragTrap	&operator=(FragTrap &obj);
		~FragTrap();
		void	attack(const std::string& target);
	    void highFiveGuys(void);
};

#endif
