/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeter <jpeter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:01:48 by jpeter            #+#    #+#             */
/*   Updated: 2024/09/27 14:10:10 by jpeter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {}

Point::Point(Fixed const x, Fixed const y): _x(x), _y(y) {}

Point::Point(Point const &ptr) {
	*this = ptr;
}

Point::~Point() {
}

Point	&Point::operator=(Point const &ptr) {
	(void)ptr;
	return *this;
}

Fixed const &Point::getX() const {
	return _x;
}

Fixed const &Point::getY() const {
	return _y;
}
