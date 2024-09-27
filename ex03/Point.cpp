/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeter <jpeter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:01:48 by jpeter            #+#    #+#             */
/*   Updated: 2024/09/27 13:26:43 by jpeter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() {
	_x = 0;
	_y = 0;
}

Point::Point(float const a, float const b) {
	_x = a;
	_y = b;
}

Point::Point(Point const &ptr) {
	*this = ptr;
}

Point::~Point() {
}

Point	&Point::operator=(Point const &ptr) {
	if (this != &ptr) {
		_x = ptr._x.getRawBits();
		_y = ptr._y.getRawBits();
	}
	return *this;
}

void	Point::setter(Fixed const &x, Fixed const &y) {
	this->_x = x;
	this->_y = y;
}
