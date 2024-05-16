/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:45:15 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/16 16:04:31 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	safeinput();

void	Contact::newContact() {
	std::cout << "-- Create a new contact --" << std::endl << std::endl << "First Name : ";
	firstName = safeinput();
	std::cout << "Last Name : ";
	lastName = safeinput();
	std::cout << "Nickname : ";
	nickName = safeinput();
	std::cout << "Phone Number : ";
	phoneNumber = safeinput();
	std::cout << "Darkest Secret : ";
	darkestSecret = safeinput();
	std::cout << std::endl << "-- All done ! --" << std::endl;
}

void	Contact::displayContact() {
	std::cout << "First Name : " << firstName << std::endl;
	std::cout << "Last Name : " << lastName << std::endl;
	std::cout << "Nickname : " << nickName << std::endl;
	std::cout << "Phone Number : " << phoneNumber << std::endl;
	std::cout << "Darkest Secret : " << darkestSecret << std::endl;
}
