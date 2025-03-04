/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:56:18 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/04 12:10:27 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	claptrap1("One");
	ClapTrap	claptrap2("Two");
	ClapTrap	claptrap3;
	ScavTrap	scavtrap1("scav");

	claptrap3 = claptrap1;
	claptrap1.attack("Two");
	claptrap2.takeDamage(20);
	claptrap2.beRepaired(5);
	scavtrap1.attack("Two");
	claptrap1.attack("Two");
	claptrap2.takeDamage(40);
	//claptrap2.takeDamage(100);
	claptrap2.beRepaired(3);
	scavtrap1.guardGate();
	return (0);
}
