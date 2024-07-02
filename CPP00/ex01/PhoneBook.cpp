/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:18:24 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/02 16:13:37 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	safeinputInt();

void	PhoneBook::newEntry()
{
	if (index > 7)
		index = 0;
	entry[index].newContact();
	index++;
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

void	PhoneBook::displayEntry() {
	int	i = 0;
	std::string firstName;
	std::string lastName;
	std::string nickName;

	while (i < 8)
	{
		firstName = resizeEntry(entry[i].firstName);
		lastName = resizeEntry(entry[i].lastName);
		nickName = resizeEntry(entry[i].nickName);
		std::cout << std::setw(10) << i
			<< "|" << std::setw(10) << firstName 
			<< "|" << std::setw(10) << lastName 
			<< "|" << std::setw(10) << nickName << std::endl;
		i++;
	}
	i = safeinputInt();
	if (i < 0)
		return ;
	entry[i].displayContact();
}
