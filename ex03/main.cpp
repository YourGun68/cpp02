/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeter <jpeter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:01:48 by jpeter            #+#    #+#             */
/*   Updated: 2024/09/27 14:26:25 by jpeter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point	point(15, 15);
	Point	a(10, 10);
	Point	b(20, 10);
	Point	c(10, 20);

	if (bsp(a, b, c, point) == 0) {
		std::cout << "The point is in the triangle ABC" << std::endl;
		return 0;	
	}
	else {
		std::cout << "The point isn't in the triangle ABC" << std::endl;
		return 1;
	}
	return 1;
}