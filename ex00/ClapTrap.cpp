/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:02:41 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/03 14:19:23 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called." << std::endl;
	this->hp = 10;
	this->energy = 10;
	this->ad = 0;
}

ClapTrap::ClapTrap(ClapTrap &other)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = other;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << name << " constructor called" << std::endl;
	this->name = name;
	this->hp = 10;
	this->energy = 10;
	this->ad = 0;
}

ClapTrap& ClapTrap::operator=(ClapTrap &other)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &other)
	{
		name = other.name;
		hp = other.hp;
		energy = other.energy;
		ad = other.ad;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
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

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hp == 0)
		std::cout << "ClapTrap " << name << "is already dead." << std::endl;
	else
	{
		hp = hp - amount;
		if (hp < 0)
			hp = 0;
		std::cout << "ClapTrap " << name << " takes " << amount << " ad."<< std::endl;
	}

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hp == 0)
		std::cout << "ClapTrap " << name << " cannot repair itself, he is already dead." << std::endl;
	else if (energy == 0)
		std::cout << "ClapTrap " << name << " has 0 energy." << std::endl;
	else
	{
		energy--;
		hp = hp + amount;
		std::cout << "ClapTrap " << name << " repairs itself with " << amount << " hp." << std::endl;
	}
}
