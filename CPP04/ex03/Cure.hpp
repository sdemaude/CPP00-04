/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:41:52 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/21 10:50:42 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &other);
		~Cure();

		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);

		Cure &operator=(Cure const &other);
};

#endif
