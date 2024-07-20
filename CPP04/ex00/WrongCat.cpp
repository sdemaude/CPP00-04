/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:17:53 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/20 17:27:40 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() :	WrongAnimal("WrongCat")
{
	std::cout << "[WrongCat] Default constructor has been called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other)
{
	std::cout << "[WrongCat] Copy constructor has been called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor has been called" << std::endl;
}

/**************/

void	WrongCat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}

/**************/

WrongCat	&WrongCat::operator=(WrongCat const &other)
{
	this->type = other.type;

	return (*this);
}
