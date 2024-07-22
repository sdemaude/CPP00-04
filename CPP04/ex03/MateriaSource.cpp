/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:59:32 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/22 13:16:50 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < MAX_MATERIA; i++)
		this->memory[i] = NULL;
	std::cout << "[MateriaSource] Default constructor has been called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (other.memory[i])
			this->memory[i] = other.memory[i]->clone();
		else
			this->memory[i] = NULL;
	}
	std::cout << "[MateriaSource] Copy constructor has been called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MAX_HISTORY and memory[i]; i++)
		delete memory[i];
	std::cout << "[MateriaSource] Destructor has been called" << std::endl;
}

/**************/

void		MateriaSource::learnMateria(AMateria *materia)
{
	int	i;

	for (i = 0; i < MAX_MATERIA and memory[i]; i++);
	if (i == MAX_MATERIA)
		std::cout << "Too many materias learned !" << std::endl;
	else
		this->memory[i] = materia->clone();
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int	i;

	for (i = 0; i < MAX_MATERIA; i++)
	{
		if (memory[i]->getType() == type)
			return (this->memory[i]->clone());
	}
	return (NULL);
}

/**************/

MateriaSource	&MateriaSource::operator=(MateriaSource const &other)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		delete this->memory[i];
		if (other.memory[i])
			this->memory[i] = other.memory[i]->clone();
		else
			this->memory[i] = NULL;
	}
	std::cout << "[MateriaSource] Copy assignment operator called" << std::endl;

	return (*this);
}
