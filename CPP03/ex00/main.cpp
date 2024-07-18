/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:53:31 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/18 18:20:50 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	fizz("Fizz");
	ClapTrap	buzz("Buzz");
	int			i(0);

	std::cout << std::endl;
	fizz.attack("Buzz");
	buzz.takeDamage(0);
	buzz.beRepaired(42);
	std::cout << std::endl;
	std::cout << "A METEOR CRASHES !!" << std::endl;
	fizz.takeDamage(21);
	buzz.takeDamage(21);
	std::cout << std::endl;
	fizz.takeDamage(10);
	std::cout << std::endl;
	while (i++ < 10)
		buzz.attack("Meteor");
	std::cout << std::endl;
	return (0);
}
