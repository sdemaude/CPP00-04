/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:07:02 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/16 16:57:22 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

class PhoneBook {
	private :
		int		index = 0;
		Contact	entry[8];

	public :
		void	newEntry();
		void	displayEntry();
};
