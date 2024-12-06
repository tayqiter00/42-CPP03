/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:32:07 by qtay              #+#    #+#             */
/*   Updated: 2024/09/23 16:13:20 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

// Derived class
class	FragTrap: public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &obj); // To be defined
		FragTrap	&operator=(FragTrap &obj); // To be defined
		~FragTrap();
		void	attack(const std::string& target);
	    void highFiveGuys(void);
};

#endif
