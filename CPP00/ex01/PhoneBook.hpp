/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:07:02 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/02 16:23:05 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cstdlib>
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

class PhoneBook {
	private :
		int		index;
		Contact	entry[8];

	public :
		void	newEntry();
		void	displayEntry();
};
