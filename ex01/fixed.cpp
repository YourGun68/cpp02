/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeter <jpeter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:01:48 by jpeter            #+#    #+#             */
/*   Updated: 2024/08/18 11:42:45 by jpeter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int Fixed::_bits = 8;

Fixed::Fixed(): _nbr(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const i) {
	std::cout << "Int constructor called" << std::endl;
	_nbr = i << _bits;
}

Fixed::Fixed(float const i) {
	std::cout << "Float constructor called" << std::endl;
	_nbr = (int)roundf(i * (1 << _bits));
}

Fixed::Fixed(Fixed const &ptr) {
	std::cout << "Copy constructor called" << std::endl;
	*this = ptr;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const &ptr) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &ptr)
		_nbr = ptr.getRawBits();
	return *this;
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
