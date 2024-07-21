/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:42:31 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/21 10:51:31 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() :	AMateria("cure")
{
	std::cout << "[Cure] Default constructor has been called" << std::endl;
}

Cure::Cure(Cure const &other) : AMateria(other.type)
{
	std::cout << "[Cure] Copy constructor has been called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "[Cure] Destructor has been called" << std::endl;
}

/**************/

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

/**************/

Cure	&Cure::operator=(Cure const &other)
{
	this->type = other.type;
	std::cout << "[Cure] Copy assignment operator called" << std::endl;

	return (*this);
}
