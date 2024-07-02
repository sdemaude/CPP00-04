/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:40:23 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/02 16:32:21 by sdemaude         ###   ########.fr       */
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
	if (argc == 2)
		std::cout << strupper(*++argv) << std::endl;
	else if (argc > 2)
	{
		for (int i = 1; argv[i]; i++)
		{
			if (i < argc - 1)
				std::cout << strupper(argv[i]) << " ";
			else
				std::cout << strupper(argv[i]) << std::endl;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
