/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:17:52 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/20 17:23:10 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() :	type("Unknowed")
{
	std::cout << "[WrongAnimal] Default constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type) :	type(type)
{
	std::cout << "[WrongAnimal] Type constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other) : type(other.type)
{
	std::cout << "[WrongAnimal] Copy constructor has been called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor has been called" << std::endl;
}

/**************/

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Grrrrr" << std::endl;
}

/**************/

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &other)
{
	this->type = other.type;

	return (*this);
}
