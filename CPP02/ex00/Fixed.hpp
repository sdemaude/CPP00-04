/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:42:35 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/27 11:13:02 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed & operator = (const Fixed &fixed);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);

	private:
		int					rawBits;
		static int const	fracBits = 8;	
};
