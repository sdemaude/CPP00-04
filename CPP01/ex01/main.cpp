/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:16:38 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/20 11:36:04 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main()
{
	int	nbZombie = 5;
	Zombie *horde = zombieHorde(nbZombie, "HaHaHa");
	for (int i = 0; i < nbZombie; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
