
#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;
public:
	Point();
	Point(Fixed const x, Fixed const y);
	Point(Point const &ptr);
	~Point();

	Point&		operator=(Point const &ptr);

	Fixed const	&getX() const;
	Fixed const	&getY() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
