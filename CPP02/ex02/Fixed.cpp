/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:42:34 by sdemaude          #+#    #+#             */
/*   Updated: 2024/05/27 16:21:38 by sdemaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	rawBits = 0;
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : rawBits(value << fracBits) {
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : rawBits(roundf(value * (1 << this->fracBits))) {
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = other;
}




Fixed &		Fixed::operator = (const Fixed &other) {
	//std::cout << "Copy assignment operator called" << std::endl;
	this->rawBits = other.getRawBits();
	return (*this);
}

std::ostream &	operator << (std::ostream &ostrm, const Fixed &other) {
	ostrm << other.toFloat();
	return (ostrm);
}




bool	Fixed::operator > (const Fixed &other) {
	return (this->rawBits > other.getRawBits());
}

bool	Fixed::operator < (const Fixed &other) {
	return (this->rawBits < other.getRawBits());
}

bool	Fixed::operator >= (const Fixed &other) {
	return (this->rawBits >= other.getRawBits());
}

bool	Fixed::operator <= (const Fixed &other) {
	return (this->rawBits <= other.getRawBits());
}

bool	Fixed::operator == (const Fixed &other) {
	return (this->rawBits == other.getRawBits());
}

bool	Fixed::operator != (const Fixed &other) {
	return (this->rawBits != other.getRawBits());
}




Fixed	Fixed::operator + (const Fixed &other) {
	setRawBits(this->rawBits + other.getRawBits());
	return (*this);
}

Fixed	Fixed::operator - (const Fixed &other) {
	setRawBits(this->rawBits - other.getRawBits());
	return (*this);
}

Fixed	Fixed::operator * (const Fixed &other) {
	setRawBits(this->rawBits * other.getRawBits() / (1 << fracBits)); 
	return (*this);
}

Fixed	Fixed::operator / (const Fixed &other) {
	setRawBits(this->rawBits / other.getRawBits() * (1 << fracBits));
	return (*this);
}




Fixed	& Fixed::operator ++ () {
	this->rawBits++;
	return (*this);
}

Fixed	& Fixed::operator -- () {
	this->rawBits--;
	return (*this);
}

Fixed	Fixed::operator ++ (int) {
	Fixed	tmp = *this;
	this->rawBits++;
	return (tmp);
}

Fixed	Fixed::operator -- (int) {
	Fixed	tmp = *this;
	this->rawBits--;
	return (tmp);
}




Fixed		& Fixed::min(Fixed &A, Fixed &B) {
	if (A.getRawBits() < B.getRawBits())
		return (A);
	return (B);
}

Fixed		& Fixed::max(Fixed &A, Fixed &B) {
	if (A.getRawBits() > B.getRawBits())
		return (A);
	return (B);
}

const Fixed	& Fixed::min(const Fixed &A, const Fixed &B) {
	if (A.getRawBits() < B.getRawBits())
		return (A);
	return (B);
}

const Fixed	& Fixed::max(const Fixed &A, const Fixed &B) {
	if (A.getRawBits() > B.getRawBits())
		return (A);
	return (B);
}




int	Fixed::getRawBits() const {
	return (this->rawBits);
}

void Fixed::setRawBits(int const raw) {
	this->rawBits = raw;
}

float	Fixed::toFloat() const {
	return ((float) this->rawBits / (1 << fracBits));
}

int		Fixed::toInt() const {
	return (this->rawBits >> fracBits);
}
