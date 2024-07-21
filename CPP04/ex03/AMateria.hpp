/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:08:31 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/21 11:46:00 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &other);
		virtual ~AMateria();

		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);

		AMateria &operator=(AMateria const &other);
};

#endif
