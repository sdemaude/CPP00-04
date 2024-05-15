/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:09:20 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/15 16:46:26 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact {
	private :
		std::string	phoneNumber;
		std::string	darkestSecret;

	public :
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;

		void	newContact();
		void	displayContact();
};
