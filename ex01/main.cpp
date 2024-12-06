/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:47:44 by qtay              #+#    #+#             */
/*   Updated: 2024/11/14 15:58:48 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	alice("alice");
	ScavTrap	bob("bob");
	alice.getStatus(), bob.getStatus();
	alice.setDamage(6);
	bob.takeDamage(alice.getDamage());
	bob.beRepaired(2);
	alice.getStatus(), bob.getStatus();
	bob.attack("alice");
	alice.takeDamage(bob.getDamage());
	alice.beRepaired(1);
	alice.getStatus(), bob.getStatus();
	bob.guardGate();
}
