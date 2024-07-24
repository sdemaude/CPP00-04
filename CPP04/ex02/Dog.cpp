/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:05:24 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/24 17:18:32 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :	Animal("Dog"),
				brain(new Brain())
{
	std::cout << "[Dog] Default constructor has been called" << std::endl;
}

Dog::Dog(Dog const &other) :	Animal(other),
								brain(new Brain(*other.brain))
{
	std::cout << "[Dog] Copy constructor has been called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "[Dog] Destructor has been called" << std::endl;
}

/**************/

void	Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}

/**************/

Dog	&Dog::operator=(Dog const &other)
{
	this->type = other.type;
	std::cout << "[Dog] Copy assignment operator called" << std::endl;

	return (*this);
}
