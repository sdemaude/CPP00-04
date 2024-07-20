/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:53:31 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/20 14:41:43 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	fizz("Fizz");
	ScavTrap	buzz("Buzz");
	int			i(0);

	std::cout << std::endl;
	fizz.attack("Buzz");
	buzz.takeDamage(20);
	buzz.beRepaired(42);
	fizz.guardGate();
	std::cout << std::endl;
	std::cout << "A METEOR CRASHES !!" << std::endl;
	fizz.takeDamage(100);
	buzz.takeDamage(100);
	std::cout << std::endl;
	fizz.takeDamage(10);
	std::cout << std::endl;
	while (i++ < 50)
		buzz.attack("Meteor");
	std::cout << std::endl;
	return (0);
}
