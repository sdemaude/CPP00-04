/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:18:24 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/16 11:58:28 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include "PhoneBook.hpp"

int	safeinputInt();

void	PhoneBook::newEntry() {
	if (index > 7)
		index = 0;
	entry[index].newContact();
	index++;
}

void	PhoneBook::displayEntry() {
	int	i = 0;

	while (i < 8)
	{
		std::cout << std::setw(10) << i << "|" << std::setw(10) << entry[i].firstName 
			<< "|" << std::setw(10) << entry[i].lastName << "|" << std::setw(10) << entry[i].nickName << std::endl;
		i++;
	}
	i = safeinputInt();
	while (i < 0 || i > 7)
		i = safeinputInt();
	entry[i].displayContact();
}
