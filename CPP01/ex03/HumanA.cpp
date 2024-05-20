/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:04:20 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/20 14:13:57 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type): name(name), type(type)
{
}

void	HumanA::attack()
{
		std::cout << name << " attacks with their " << type.getType() << std::endl; 
}
