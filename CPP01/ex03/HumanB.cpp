/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:13:34 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/18 15:50:10 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->type = NULL;
}

void	HumanB::setWeapon(Weapon &type)
{
	this->type = &type;
}

void	HumanB::attack()
{
	if (type)
		std::cout << name << " attacks with their " << type->getType() << std::endl; 
	else
		std::cout << name << " missed their attack, they don't have any weapon ... " << std::endl;
}
