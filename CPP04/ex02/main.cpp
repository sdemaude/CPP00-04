/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:50:34 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/21 10:04:11 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define N_ANIMAL 10

int	main()
{
	Animal	*animal_array[N_ANIMAL];
	//Animal	testAnimal;

	for (unsigned int i(0); i < N_ANIMAL; i++)
	{
		if (i * 2 < N_ANIMAL)
			animal_array[i] = new Cat();
		else
			animal_array[i] = new Dog();
	}
	std::cout << std::endl;
	for (int i = 0; i < N_ANIMAL; i++)
		animal_array[i]->makeSound();
	std::cout << std::endl;
	for (int i = 0; i < N_ANIMAL; i++)
		delete animal_array[i]; 

	return (0);
}
