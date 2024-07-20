/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:52:14 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/20 16:49:32 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string const &type);
		Animal(Animal const &other);
		virtual ~Animal();

		std::string		getType() const;
		virtual void	makeSound() const;

		Animal &operator=(Animal const &other);
};

#endif
