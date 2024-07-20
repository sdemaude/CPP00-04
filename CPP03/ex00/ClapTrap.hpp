/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:53:36 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/20 13:45:00 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ClapTrap {
	private:
		std::string	name;
		int			hitPoint;
		int			energyPoint;
		int			attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap const &other);
		~ClapTrap();

		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap &operator=(ClapTrap const &other);
};
