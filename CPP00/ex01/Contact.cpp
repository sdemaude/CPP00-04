/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:45:15 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/15 16:46:19 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

void	Contact::newContact() {
	std::cout << "-- Create a new contact --" << std::endl << std::endl << "First Name : ";
	std::cin >> firstName;
	std::cout << "Last Name : ";
	std::cin >> lastName;
	std::cout << "Nickname : ";
	std::cin >> nickName;
	std::cout << "Phone Number : ";
	std::cin >> phoneNumber;
	std::cout << "Darkest Secret : ";
	std::cin >> darkestSecret;
	std::cout << std::endl << "-- All done ! --" << std::endl;
}

void	Contact::displayContact() {
	std::cout << "First Name : " << firstName << std::endl;
	std::cout << "Last Name : " << lastName << std::endl;
	std::cout << "Nickname : " << nickName << std::endl;
	std::cout << "Phone Number : " << phoneNumber << std::endl;
	std::cout << "Darkest Secret : " << darkestSecret << std::endl;
}
