/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:07:02 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/15 17:41:13 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook {
	private :
		int		index = 0;
		Contact	entry[8];

	public :
		void	newEntry();
		void	displayEntry();
};
