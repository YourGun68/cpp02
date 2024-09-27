/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeter <jpeter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:01:48 by jpeter            #+#    #+#             */
/*   Updated: 2024/09/27 11:06:21 by jpeter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int Fixed::_bits = 8;

Fixed::Fixed(): _nbr(0) {
}

Fixed::Fixed(int const i) {
	_nbr = i << _bits;
}

Fixed::Fixed(float const i) {
	_nbr = (int)roundf(i * (1 << _bits));
}

Fixed::Fixed(Fixed const &ptr) {
	*this = ptr;
}

Fixed::~Fixed() {
}


Fixed&	Fixed::operator=(Fixed const &ptr) {
	if (this != &ptr)
		_nbr = ptr.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(Fixed const &ptr) const {
	Fixed	mem;
	mem.setRawBits(getRawBits() + ptr.getRawBits());
	return mem;
}

Fixed	Fixed::operator-(Fixed const &ptr) const {
	Fixed	mem;
	mem.setRawBits(getRawBits() - ptr.getRawBits());
	return mem;
}

Fixed	Fixed::operator*(Fixed const &ptr) const {
	Fixed	mem;
	mem.setRawBits(getRawBits() * ptr.getRawBits() >> _bits);
	return mem;
}

Fixed	Fixed::operator/(Fixed const &ptr) const {
	Fixed	mem;
	mem.setRawBits(getRawBits() / ptr.getRawBits() << _bits);
	return mem;
}

Fixed&	Fixed::operator++() {
	_nbr++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	operator++();
	return tmp;
}

Fixed&	Fixed::operator--() {
	_nbr--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);
	operator--();
	return tmp;
}

bool	Fixed::operator<(Fixed const &ptr) {
	if (this->_nbr < ptr.getRawBits())
		return EXIT_SUCCESS;
	return EXIT_FAILURE;
}

bool	Fixed::operator>(Fixed const &ptr) {
	if (this->_nbr > ptr.getRawBits())
		return EXIT_SUCCESS;
	return EXIT_FAILURE;
}

bool	Fixed::operator<=(Fixed const &ptr) {
	if (this->_nbr <= ptr.getRawBits())
		return EXIT_SUCCESS;
	return EXIT_FAILURE;
}

bool	Fixed::operator>=(Fixed const &ptr) {
	if (this->_nbr >= ptr.getRawBits())
		return EXIT_SUCCESS;
	return EXIT_FAILURE;
}

bool	Fixed::operator==(Fixed const &ptr) {
	if (this->_nbr == ptr.getRawBits())
		return EXIT_SUCCESS;
	return EXIT_FAILURE;
}

bool	Fixed::operator!=(Fixed const &ptr) {
	if (this->_nbr != ptr.getRawBits())
		return EXIT_SUCCESS;
	return EXIT_FAILURE;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
	return a < b ? a : b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
	return a > b ? a : b;
}

Fixed const &min(Fixed const &a, Fixed const &b) {
	return Fixed::min(a, b);
}

Fixed const &max(Fixed const &a, Fixed const &b) {
	return Fixed::max(a, b);
}


int		Fixed::getRawBits(void) const {
	return (this->_nbr);
}

void	Fixed::setRawBits(int const raw) {
	this->_nbr = raw;
}


int	Fixed::toInt( void ) const {
	return (int)(_nbr >> _bits);
}

float	Fixed::toFloat( void ) const {
	return (float)(_nbr / (float)(1 << _bits));
}

std::ostream&	operator<<(std::ostream &i, Fixed const &fixed) {
	i << fixed.toFloat();
	return i;
}
