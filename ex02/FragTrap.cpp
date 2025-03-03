/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:26:38 by paprzyby          #+#    #+#             */
/*   Updated: 2025/03/03 14:35:49 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called." << std::endl;
	this->hp = 100;
	this->energy = 100;
	this->ad = 30;
}

FragTrap::FragTrap(FragTrap &copy)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = copy;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->name = name;
	this->hp = 100;
	this->energy = 100;
	this->ad = 30;
}

FragTrap& FragTrap::operator=(FragTrap &copy)
{
	std::cout << "FragTrap copy assignment operator called." << std::endl;
	if (this != &copy)
	{
		name = copy.name;
		hp = copy.hp;
		energy = copy.energy;
		ad = copy.ad;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}
