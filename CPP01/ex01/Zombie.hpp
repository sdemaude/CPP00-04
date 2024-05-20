/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:06:38 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/18 15:15:35 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie {
	private :
		std::string	name;
	
	public :
		void setName(std::string name);
		void announce();
		Zombie();
		~Zombie();
		//std::string getName();
};
