/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:50:34 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/20 18:03:02 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	Animal	*animal_array[21];

	for (unsigned int i(0); i < 21; i++)
	{
		if (i * 2 < 21)
			animal_array[i] = new Dog();
		else
			animal_array[i] = new Cat();
	}
	std::cout << std::endl;
	for (unsigned int i(0); i < 21; i++)
	{
		animal_array[i]->makeSound();
		/*animal_array[i]->eat();
		animal_array[i]->play();
		animal_array[i]->sleep();*/
	}
	std::cout << std::endl;
	for (unsigned int i(0); i < 21; i++)
		delete animal_array[i];
	return (0);
}
