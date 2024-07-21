/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:48:19 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/21 09:42:34 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

#define S_ARRAY 100

class Brain
{
	protected:
		std::string	ideas[S_ARRAY];

	public:
		Brain();
		Brain(Brain const &other);
		~Brain();

		Brain &operator=(Brain const &other);
};

#endif
