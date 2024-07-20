/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:06:36 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/20 14:39:05 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :	ClapTrap(100, 50, 20)
{
	std::cout << "[ScavTrap] Default constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) :	ClapTrap(100, 50, 20, name)
{
	std::cout << "[ScavTrap] Name constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
	std::cout << "[ScavTrap] Copy constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] Destructor has been called" << std::endl;
}

/**************/

void	ScavTrap::attack(std::string const &target)
{
	if (this->energyPoint > 0 and this->hitPoint > 0)
	{
		this->energyPoint--;
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage !" << std::endl;
	}
	else
		std::cout << "No energy or hit points left, could not attack " << target << " !" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now is guate keeper mode !" << std::endl;
}

/**************/

ScavTrap	&ScavTrap::operator=(ScavTrap const &other)
{
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;

	return (*this);
}
