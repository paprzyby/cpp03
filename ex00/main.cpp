/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:56:18 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/04 12:07:00 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap claptrap1("One");
	ClapTrap claptrap2("Two");
	ClapTrap claptrap3;

	claptrap3 = claptrap1;
	claptrap1.attack("Two");
	claptrap2.takeDamage(0);
	claptrap2.beRepaired(5);
	claptrap1.attack("Two");
	claptrap2.beRepaired(3);
	return (0);
}
