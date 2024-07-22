/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:00:00 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/22 12:31:56 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : index(0)
{
	for (int i = 0; i < MAX_MATERIA; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < MAX_HISTORY; i++)
		this->history[i] = NULL;
	std::cout << "[Character] Default constructor has been called" << std::endl;
}

Character::Character(std::string const &name) : name(name), index(0)
{
	for (int i = 0; i < MAX_MATERIA; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < MAX_HISTORY; i++)
		this->history[i] = NULL;
	std::cout << "[Character] Name constructor has been called" << std::endl;
}

Character::Character(Character const &other) : name(other.name), index(0)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	for (int i = 0; i < MAX_HISTORY; i++)
		this->history[i] = NULL;
	std::cout << "[Character] Copy constructor has been called" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < MAX_MATERIA; i++)
		delete inventory[i];
	for (int i = 0; i < MAX_HISTORY and history[i]; i++)
		delete history[i];
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
	
	if (!materia)
		return ;
	for (idx = 0; idx < MAX_MATERIA and this->inventory[idx]; idx++);
	if (idx < MAX_MATERIA)
		this->inventory[idx] = materia->clone();
}

void	Character::unequip(int idx)
{
	if (idx >= 0 and idx < MAX_MATERIA and inventory[idx])
	{
		addHistory(inventory[idx]);
		inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 and idx < MAX_MATERIA and inventory[idx])
		this->inventory[idx]->use(target);
}

void	Character::addHistory(AMateria *materia)
{
	if (index >= MAX_HISTORY)
	{
		index = 0;
		delete this->history[index];
	}
	this->history[index] = materia;
	index++;
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
