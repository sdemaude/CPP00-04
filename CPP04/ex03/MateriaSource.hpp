/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:50:28 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/21 13:55:54 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private :
		
	public :
		MateriaSource();
		MateriaSource(MateriaSource const &other);
		~MateriaSource();

		virtual void		learnMateria(AMateria *materia);
		virtual AMateria	*createMateria(std::string const &type);

		MateriaSource	&operator=(MateriaSource const &other);
};

#endif
