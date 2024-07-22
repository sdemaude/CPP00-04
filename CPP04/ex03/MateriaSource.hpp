/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:50:28 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/22 11:54:47 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "Character.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private :
		AMateria	*memory[MAX_MATERIA];

	public :
		MateriaSource();
		MateriaSource(MateriaSource const &other);
		~MateriaSource();

		virtual void		learnMateria(AMateria *materia);
		virtual AMateria	*createMateria(std::string const &type);

		MateriaSource	&operator=(MateriaSource const &other);
};

#endif
