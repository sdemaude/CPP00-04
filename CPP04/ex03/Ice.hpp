/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:25:39 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/21 10:49:29 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE
#define ICE

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &other);
		~Ice();

		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);

		Ice &operator=(Ice const &other);
};

#endif
