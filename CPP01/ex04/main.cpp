/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:03:45 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/21 14:39:39 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <fstream>
#include <string>
#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "Incorrect number of parameters !" << std::endl, 1);

	std::string		s1 = av[2];
	if (s1.empty())
		return (std::cout << "First string parameter invalid" << std::endl, 1);
	std::string		s2 = av[3];
	std::string		tmp;
	std::ifstream	infile;
	
	infile.open(av[1]);
	if (!infile.is_open())
		return (std::cout << "Invalid file input" << std::endl, 1);
	std::getline(infile, tmp);
	infile.close();

	std::string		newName = av[1];
	newName += ".replace";

	std::ofstream	outfile(newName);

	int	index = 0;
	while (tmp.find(s1) != -1)
	{
		index = tmp.find(s1, index);
		if (index > tmp.length())
			break;
		tmp.erase(index, s1.length());
		tmp.insert(index, s2);

		index += s2.length();
	}
	outfile << tmp << std::endl;
	outfile.close();

	return (0);
}
