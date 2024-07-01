/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:40:23 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/01 09:51:12 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*strupper(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		while (*++argv)
			std::cout << strupper(*argv) << std::endl;
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
