/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:56:18 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/03 14:38:40 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	claptrap1("One");
	ClapTrap	claptrap2("Two");
	ScavTrap	scavtrap1("scav");
	FragTrap	fragtrap("fragtrap");

	claptrap1.attack("Two");
	claptrap2.takeDamage(20);
	claptrap2.beRepaired(5);
	scavtrap1.attack("Two");
	claptrap1.attack("Two");
	claptrap2.takeDamage(40);
	//claptrap2.takeDamage(100);
	claptrap2.beRepaired(3);
	scavtrap1.guardGate();
	fragtrap.highFivesGuys();
	return (0);
}
