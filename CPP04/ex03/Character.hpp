/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:59:59 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/21 12:42:37 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

#define MAX_MATERIA 4

class Character : public ICharacter
{
	private :
		std::string	name;
		AMateria	*inventory[MAX_MATERIA];

	public :
		Character();
		Character(std::string const &name);
		Character(Character const &other);
		virtual ~Character();

		virtual std::string const	&getName() const;
		virtual void	equip(AMateria *m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter &target);

		Character &operator=(Character const &other);
};

#endif
