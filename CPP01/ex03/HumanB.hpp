/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:14:44 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/20 14:10:11 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private :
		std::string	name;
		Weapon		*type;

	public :
		HumanB(std::string name);
		void	setWeapon(Weapon &type);
		void	attack();
};
