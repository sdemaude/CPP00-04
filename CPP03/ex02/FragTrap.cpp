/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:55:15 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/20 15:07:19 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() :	ClapTrap(100, 100, 30)
{
	std::cout << "[FragTrap] Default constructor has been called" << std::endl;
}

FragTrap::FragTrap(std::string const &name) :	ClapTrap(100, 100, 30, name)
{
	std::cout << "[FragTrap] Name constructor has been called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
	std::cout << "[FragTrap] Copy constructor has been called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] Destructor has been called" << std::endl;
}

/**************/

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " wants to give you a high five !" << std::endl;
}

/**************/

FragTrap	&FragTrap::operator=(FragTrap const &other)
{
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;

	return (*this);
}
