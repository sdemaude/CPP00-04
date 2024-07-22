/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:59:59 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/22 10:34:20 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

#define MAX_MATERIA 4
#define MAX_HISTORY 100

class Character : public ICharacter
{
	private :
		std::string	name;
		AMateria	*inventory[MAX_MATERIA];
		AMateria	*history[MAX_HISTORY];
		int			index;
	
		void		addHistory(AMateria *materia);

	public :
		Character();
		Character(std::string const &name);
		Character(Character const &other);
		virtual ~Character();

		virtual std::string const	&getName() const;
		virtual void	equip(AMateria *materia);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter &target);

		Character &operator=(Character const &other);
};

#endif
