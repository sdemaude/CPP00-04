/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:18:24 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/15 18:42:51 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

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
		std::cout << i << " " << entry[i].firstName << " " << entry[i].lastName << " " << entry[i].nickName << std::endl;
		i++;
	}
	std::cin >> i;
	while (i < 0 || i > 7)
		std::cin >> i;
	entry[i].displayContact();
}
