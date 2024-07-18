/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:09:20 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/18 12:03:50 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

class Contact {
	private :
		std::string	phoneNumber;
		std::string	darkestSecret;
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;

	public :
		void	newContact();
		void	displayContact();
		void	displayEntry(int i);
};
