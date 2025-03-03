/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:19:54 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/03 14:21:57 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called." << std::endl;
	this->hp = 100;
	this->energy = 50;
	this->ad = 20;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = copy;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->name = name;
	this->hp = 100;
	this->energy = 50;
	this->ad = 20;
}

ScavTrap& ScavTrap::operator=(ScavTrap &copy)
{
	std::cout << "ScavTrap copy assignment operator called." << std::endl;
	if (this != &copy)
	{
		name = copy.name;
		hp = copy.hp;
		energy = copy.energy;
		ad = copy.ad;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (hp == 0)
		std::cout << "ClapTrap " << name << " has 0 hp." << std::endl;
	else if (energy == 0)
		std::cout << "ClapTrap " << name << " has 0 energy." << std::endl;
	else
	{
		energy--;
		std::cout << "ClapTrap " << name << " attacks the target " << target << " with " << ad << " ad!" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}
