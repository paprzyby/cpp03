/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:01:45 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/03 12:46:33 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(ClapTrap &copy);
		ClapTrap(std::string name);
		ClapTrap &operator=(ClapTrap &copy);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string	name;
		int			hp = 10;
		int			energy = 10;
		int			ad = 0;
};

#endif
