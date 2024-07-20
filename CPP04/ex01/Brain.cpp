/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:48:17 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/20 18:20:43 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Default constructor has been called" << std::endl;
}

Brain::Brain(std::string const &type) :	ideas(ideas)
{
	std::cout << "[Brain] Type constructor has been called" << std::endl;
}

Brain::Brain(Brain const &other) : ideas(other.ideas)
{
	std::cout << "[Brain] Copy constructor has been called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor has been called" << std::endl;
}

/**************/

Brain	&Brain::operator=(Brain const &other)
{
	this->ideas = other.ideas;

	return (*this);
}
