/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:47:44 by qtay              #+#    #+#             */
/*   Updated: 2024/09/21 15:10:44 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	alice("alice");
	ClapTrap	bob("bob");
	alice.getStatus(), bob.getStatus();
	alice.setDamage(6);
	alice.attack("bob");
	bob.takeDamage(alice.getDamage());
	bob.beRepaired(1);
	alice.getStatus(), bob.getStatus();
	alice.attack("bob");
	bob.takeDamage(alice.getDamage());
	bob.beRepaired(1);
	alice.getStatus(), bob.getStatus();
}
