/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:53:40 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/20 14:44:29 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :	name("Unnamed"),
						hitPoint(10),
						energyPoint(10),
						attackDamage(0)
{
	std::cout << "[ClapTrap] Default constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) :	name(name),
												hitPoint(10),
												energyPoint(10),
												attackDamage(0)
{
	std::cout << "[ClapTrap] Name constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other) : name(other.name),
											hitPoint(other.hitPoint),
											energyPoint(other.energyPoint),
											attackDamage(other.attackDamage)
{
	std::cout << "[ClapTrap] Copy constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(int hitPoint, int energyPoint, int attackDamage, std::string name) : name(name),
																						hitPoint(hitPoint),
																						energyPoint(energyPoint),
																						attackDamage(attackDamage)
{
	std::cout << "[ClapTrap] All parameters constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] Destructor has been called" << std::endl;
}

/**************/

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoint > 0 and this->hitPoint > 0)
	{
		this->energyPoint--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage !" << std::endl;
	}
	else
		std::cout << "No energy or hit points left, could not attack " << target << " !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint > 0)
	{
		this->hitPoint -= amount;
		std::cout << "ClapTrap " << name << " lost " << amount << " hit point(s) !!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " is already dead, could not take damage !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint > 0 and this->hitPoint > 0)
	{
		this->energyPoint--;
		this->hitPoint += amount;
		std::cout << "ClapTrap " << name << " repaired itself, it got " << amount << " hit points back !" << std::endl;
	}
	else
		std::cout << "No energy or hit points left, could not repaire itself !" << std::endl;
}

/*************/

ClapTrap	&ClapTrap::operator=(ClapTrap const &other)
{
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;

	return (*this);
}
