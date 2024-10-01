/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeter <jpeter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:01:48 by jpeter            #+#    #+#             */
/*   Updated: 2024/09/27 14:37:35 by jpeter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	float cross1 = (a.getX().toFloat() - point.getX().toFloat()) * (b.getY().toFloat() - a.getY().toFloat()) - (b.getX().toFloat() - a.getX().toFloat()) * (a.getY().toFloat() - point.getY().toFloat());
	float cross2 = (b.getX().toFloat() - point.getX().toFloat()) * (c.getY().toFloat() - b.getY().toFloat()) - (c.getX().toFloat() - b.getX().toFloat()) * (b.getY().toFloat() - point.getY().toFloat());
	float cross3 = (c.getX().toFloat() - point.getX().toFloat()) * (a.getY().toFloat() - c.getY().toFloat()) - (a.getX().toFloat() - c.getX().toFloat()) * (c.getY().toFloat() - point.getY().toFloat());

	if (cross1 == 0 || cross2 == 0 || cross3 == 0)
		return false;
	bool sign1 = cross1 > 0;
	bool sign2 = cross2 > 0;
	bool sign3 = cross3 > 0;
	return sign1 == sign2 && sign2 == sign3;
}
