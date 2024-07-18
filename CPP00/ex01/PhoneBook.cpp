/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:18:24 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/18 12:03:56 by sdemaude         ###   ########.fr       */
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

void	PhoneBook::displayEntry()
{
	int	i = 0;

	while (i < 8)
	{
		entry[i].displayEntry(i);
		i++;
	}
	i = safeinputInt();
	if (i < 0)
		return ;
	entry[i].displayContact();
}
