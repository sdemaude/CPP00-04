/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:53:21 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/21 10:03:57 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() :	type("Unknowed")
{
	std::cout << "[Animal] Default constructor has been called" << std::endl;
}

Animal::Animal(std::string const &type) :	type(type)
{
	std::cout << "[Animal] Type constructor has been called" << std::endl;
}

Animal::Animal(Animal const &other) : type(other.type)
{
	std::cout << "[Animal] Copy constructor has been called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor has been called" << std::endl;
}

/**************/

std::string	Animal::getType() const
{
	return (this->type);
}

/**************/

Animal	&Animal::operator=(Animal const &other)
{
	this->type = other.type;
	std::cout << "[Animal] Copy assignment operator called" << std::endl;

	return (*this);
}
