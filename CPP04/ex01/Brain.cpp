/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:48:17 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/25 11:32:34 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Default constructor has been called" << std::endl;
}

Brain::Brain(Brain const &other)
{
	std::cout << "[Brain] Copy constructor has been called" << std::endl;
	*this = other;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor has been called" << std::endl;
}

/**************/

Brain	&Brain::operator=(Brain const &other)
{
	this->ideas->clear();
	for (int i = 0; i < S_ARRAY; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "[Brain] Copy assignment operator called" << std::endl;

	return (*this);
}
