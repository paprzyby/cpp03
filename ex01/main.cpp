/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:56:18 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/03 13:27:36 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap claptrap1("One");
	ClapTrap claptrap2("Two");

	claptrap1.attack("Two");
	claptrap2.takeDamage(3);
	claptrap2.beRepaired(3);
	claptrap1.attack("Two");
	claptrap2.takeDamage(11);
	claptrap2.beRepaired(3);
	return (0);
}
