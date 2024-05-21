/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:46:18 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/21 17:57:53 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl newHarl;

	newHarl.complain("debug");
	newHarl.complain("info");
	newHarl.complain("warning");
	newHarl.complain("error");
	newHarl.complain("sing");

	return (0);
}
