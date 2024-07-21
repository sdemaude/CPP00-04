/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:09:13 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/21 11:47:50 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() :	type("Unknowed")
{
	std::cout << "[AMateria] Default constructor has been called" << std::endl;
}

AMateria::AMateria(std::string const &type) :	type(type)
{
	std::cout << "[AMateria] Type constructor has been called" << std::endl;
}

AMateria::AMateria(AMateria const &other) : type(other.type)
{
	std::cout << "[AMateria] Copy constructor has been called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "[AMateria] Destructor has been called" << std::endl;
}

/**************/

std::string const	&AMateria::getType() const
{
	return (this->type);
}

//use ??

/**************/

AMateria	&AMateria::operator=(AMateria const &other)
{
	this->type = other.type;
	std::cout << "[AMateria] Copy assignment operator called" << std::endl;

	return (*this);
}
