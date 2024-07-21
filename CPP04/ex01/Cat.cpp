/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:05:15 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/21 09:43:20 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :	Animal("Cat")
{
	std::cout << "[Cat] Default constructor has been called" << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other)
{
	std::cout << "[Cat] Copy constructor has been called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor has been called" << std::endl;
}

/**************/

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}

/**************/

Cat	&Cat::operator=(Cat const &other)
{
	this->type = other.type;
	std::cout << "[Cat] Copy assignment operator called" << std::endl;

	return (*this);
}
