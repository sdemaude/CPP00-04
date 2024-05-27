/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:42:35 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/27 15:29:43 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		Fixed & operator = (const Fixed &other);
		~Fixed();
		
		bool	operator > (const Fixed &other);
		bool	operator < (const Fixed &other);
		bool	operator >= (const Fixed &other);
		bool	operator <= (const Fixed &other);
		bool	operator == (const Fixed &other);
		bool	operator != (const Fixed &other);

		Fixed	operator + (const Fixed &other);
		Fixed	operator - (const Fixed &other);
		Fixed	operator * (const Fixed &other);
		Fixed	operator / (const Fixed &other);

		Fixed		&operator ++ ();
		Fixed		&operator -- ();
		Fixed		operator ++ (int);
		Fixed		operator -- (int);

		static Fixed		&min(Fixed &A, Fixed &B);
		static Fixed		&max(Fixed &A, Fixed &B);
		static const Fixed	&min(const Fixed &A, const Fixed &B);
		static const Fixed	&max(const Fixed &A, const Fixed &B);

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;

	private:
		int					rawBits;
		static int const	fracBits = 8;	
};

std::ostream &	operator << (std::ostream &ostrm, const Fixed &other);
