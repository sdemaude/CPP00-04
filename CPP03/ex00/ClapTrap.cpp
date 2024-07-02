/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:53:40 by sdemaude          #+#    #+#             */
/*   Updated: 2024/06/13 15:25:56 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
	this->Name = Name;
	this->HitPoint = 10;
	this->EnergyPoint = 10;
	this->AttackDamage = 0;
	std::cout << "Constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor has been called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoint > 0 or this->HitPoint > 0)
	{
		this->EnergyPoint--;
	//	target.takeDamage(this->AttackDamage);
		std::cout << "ClapTrap" << Name << "attacks" << target << ", causing" << AttackDamage << "points of damage!" << std::endl;
	}
	else
		std::cout << "No energy or hit points left, could not attack" << target << "!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{

	//??target->HitPoint -= this->AttackDamage;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoint > 0 or this->HitPoint > 0)
	{
		this->EnergyPoint--;
		this->HitPoint += amount;
		std::cout << "ClapTrap" << Name << "repaired itself, it got" << amount << "hit points back!" << std::endl;
	}
	else
		std::cout << "No energy or hit points left, could not repaired itself!" << std::endl;
}
