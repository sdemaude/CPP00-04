/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:00:00 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/21 13:19:04 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "[Character] Default constructor has been called" << std::endl;
}

Character::Character(std::string const &name) : name(name)
{
	std::cout << "[Character] Name constructor has been called" << std::endl;
}

Character::Character(Character const &other) : name(other.name)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	std::cout << "[Character] Copy constructor has been called" << std::endl;
}

Character::~Character()
{
	std::cout << "[Character] Destructor has been called" << std::endl;
}

/**************/

std::string const	&Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria *materia)
{
	int	idx;
	
	for (idx = 0; idx < MAX_MATERIA and this->inventory[idx]; idx++);
	if (idx < MAX_MATERIA)
		this->inventory[idx] = materia->clone();
}

void	Character::unequip(int idx)
{
	if (idx >= 0 and idx < MAX_MATERIA)
		inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 and idx < MAX_MATERIA and inventory[idx])
		this->inventory[idx]->use(target);
}

/**************/

Character	&Character::operator=(Character const &other)
{
	this->name = other.name;
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		delete this->inventory[i];
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	std::cout << "[Character] Copy assignment operator called" << std::endl;

	return (*this);
}
