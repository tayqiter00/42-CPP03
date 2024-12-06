/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:47:44 by qtay              #+#    #+#             */
/*   Updated: 2024/09/22 17:47:12 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	alice("alice");
	FragTrap	bob("bob");

	alice.getStatus(), bob.getStatus();
	alice.setDamage(6);
	alice.attack("bob");
	bob.takeDamage(alice.getDamage());
	bob.beRepaired(6);
	alice.getStatus(), bob.getStatus();
	bob.attack("alice");
	alice.takeDamage(bob.getDamage());
	alice.beRepaired(1);
	alice.getStatus(), bob.getStatus();
	bob.highFiveGuys();
}
