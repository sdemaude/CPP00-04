/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:30:10 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/21 10:50:02 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() :	AMateria("ice")
{
	std::cout << "[Ice] Default constructor has been called" << std::endl;
}

Ice::Ice(Ice const &other) : AMateria(other.type)
{
	std::cout << "[Ice] Copy constructor has been called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "[Ice] Destructor has been called" << std::endl;
}

/**************/

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/**************/

Ice	&Ice::operator=(Ice const &other)
{
	this->type = other.type;
	std::cout << "[Ice] Copy assignment operator called" << std::endl;

	return (*this);
}
