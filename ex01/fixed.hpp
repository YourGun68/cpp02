
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int			_nbr;
		static int	_bits;
	public:
		Fixed();
		Fixed(int const i);
		Fixed(float const i);
		Fixed(Fixed const &ptr);
		~Fixed();
		Fixed&	operator=(Fixed const &ptr);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream &i, Fixed const &fixed);

#endif
