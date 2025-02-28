/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:56:18 by paprzyby          #+#    #+#             */
/*   Updated: 2025/02/28 15:57:50 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
