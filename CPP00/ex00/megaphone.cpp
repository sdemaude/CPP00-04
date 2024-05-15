/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:40:23 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/13 17:23:27 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

char	*strupper(char *str)
{
	int	i = 0;
	
	while (str[i] != '\0')
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		while (*++argv)
			std::cout << strupper(*argv);
		std::cout << std::endl;
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return (0);
}
