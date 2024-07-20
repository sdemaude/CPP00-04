/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:48:19 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/20 17:57:15 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	protected:
		std::string	ideas[100];

	public:
		Brain();
		Brain(Brain const &other);
		~Brain();

		Brain &operator=(Brain const &other);
};

#endif
