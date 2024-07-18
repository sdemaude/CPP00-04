/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:45:15 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/18 14:51:55 by sdemaude         ###   ########.fr       */
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

std::string	resizeEntry(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.push_back('.');
	}
	return (str);
}

void	Contact::displayEntry(int i) {
	std::string firstName;
	std::string lastName;
	std::string nickName;

	firstName = resizeEntry(this->firstName);
	lastName = resizeEntry(this->lastName);
	nickName = resizeEntry(this->nickName);
	std::cout << std::setw(10) << i
	<< "|" << std::setw(10) << firstName 
	<< "|" << std::setw(10) << lastName 
	<< "|" << std::setw(10) << nickName << std::endl;
}
