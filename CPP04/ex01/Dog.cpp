/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:05:24 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/20 16:34:56 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :	Animal("Dog")
{
	std::cout << "[Dog] Default constructor has been called" << std::endl;
}

Dog::Dog(Dog const &other) : Animal(other)
{
	std::cout << "[Dog] Copy constructor has been called" << std::endl;
}

Dog::~Dog()
{
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

	return (*this);
}
