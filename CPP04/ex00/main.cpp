/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:50:34 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/20 17:17:42 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	good(void)
{
	Animal const	*meta = new Animal();
	Animal const	*dog = new Dog();
	Animal const	*cat = new Cat();

	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;
	meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	std::cout << std::endl;

	delete meta;
	delete dog;
	delete cat;
}

void	wrong(void)
{
	WrongAnimal const	*meta = new WrongAnimal();
	//WrongAnimal const	*dog = new WrongDog();
	WrongAnimal const	*cat = new WrongCat();

	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	//std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;
	meta->makeSound();
	//dog->makeSound();
	cat->makeSound();
	std::cout << std::endl;

	delete meta;
	//delete dog;
	delete cat;
}

int	main(void)
{
	good();
	std::cout << std::endl << std::endl << std::endl;
	wrong();
	return (0);
}
