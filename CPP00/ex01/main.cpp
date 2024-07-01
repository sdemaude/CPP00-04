/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:55:52 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/01 12:00:11 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	safeinput()
{
	std::string	str;

	if (std::cin.eof())
		exit(0);
	std::getline(std::cin, str);
	return (str);
}

int	safeinputInt()
{
	int	i = -1;
	std::stringstream	strs;

	strs << safeinput();
	strs >> i;

	if (strs.fail() || !strs.eof() || i < 0 || i > 7)
		return (-1);
	return (i);
}

int	main()
{
	std::string str;
	PhoneBook	dir;

	int i = -1;
	while (1)
	{
		std::cout << std::endl << "Type ADD to create a new contact, SEARCH to find an existing one or EXIT to quit : ";
		str = safeinput();
		while (str != "ADD" && str != "SEARCH" && str != "EXIT")
			str = safeinput();
		if (str == "EXIT")
			return (0);
		if (str == "ADD")
			dir.newEntry();
		else if (str == "SEARCH")
			dir.displayEntry();
	}
	return (0);
}
