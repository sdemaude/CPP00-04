/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:13:34 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/20 14:13:49 by sdemaude         ###   ########.fr       */
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
		std::cout << name << " attacks with their " << type->getType() << std::endl; 
}
