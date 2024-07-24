/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:42:35 by sdemaude          #+#    #+#             */
/*   Updated: 2024/07/24 09:48:07 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int					rawBits;
		static int const	fracBits = 8;	

	public:
		Fixed();
		Fixed(Fixed const &other);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int const raw);

		Fixed &operator=(const Fixed &other);
};
