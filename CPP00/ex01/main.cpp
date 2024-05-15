/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:55:52 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/15 17:54:59 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main()
{
	std::string str;
	PhoneBook	dir;

	while (1)
	{
		std::cout << std::endl << "Type ADD to create a new contact, SEARCH to find an existing one or EXIT to quit : ";
		if (std::cin.eof())
			exit(0);
		std::cin >> str;
		while (str != "ADD" && str != "SEARCH" && str != "EXIT")
			std::cin >> str;
		if (str == "EXIT")
			return (0);
		if (str == "ADD")
			dir.newEntry();
		else if (str == "SEARCH")
			dir.displayEntry();
	}
	return (0);
}
