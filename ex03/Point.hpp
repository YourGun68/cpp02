
#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "fixed.hpp"

class Point
{
private:
	Fixed	_x;
	Fixed	_y;
public:
	Point();
	Point(float const a, float const b);
	Point(Point const &ptr);
	~Point();

	Point&	operator=(Point const &ptr);

	void	setter(Fixed const &x, Fixed const &y);
};

#endif
