/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:08:23 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/22 13:42:12 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void	learn(IMateriaSource *src)
{
	AMateria	*ice = new Ice();
	AMateria	*cure = new Cure();

	src->learnMateria(ice);
	src->learnMateria(cure);

	delete ice;
	delete cure;
}

int	main(void)
{
	IMateriaSource	*src = new MateriaSource();
	ICharacter		*me = new Character("me");
	ICharacter		*bob = new Character("bob");
	AMateria		*ice;
	AMateria		*cure;

	std::cout << std::endl;
	learn(src);
	std::cout << std::endl;
	ice = src->createMateria("ice");
	cure = src->createMateria("cure");
	std::cout << std::endl;
	
	me->equip(ice);
	me->equip(cure);
	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	me->unequip(0);
	me->equip(cure);
	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;
	delete ice;
	delete cure;

	return (0);
}
