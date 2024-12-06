/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:55:12 by qtay              #+#    #+#             */
/*   Updated: 2024/11/08 14:00:01 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

// Derived class
class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;

	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &obj);
		DiamondTrap	&operator=(DiamondTrap &obj);
		~DiamondTrap();

		using ScavTrap::attack;
		void	whoAmI(void);
		void	getStatus(void);
};



#endif