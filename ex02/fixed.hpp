
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
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		Fixed	operator+(Fixed const &ptr) const;
		Fixed	operator-(Fixed const &ptr) const;
		Fixed	operator*(Fixed const &ptr) const;
		Fixed	operator/(Fixed const &ptr) const;
		bool	operator<(Fixed const &ptr);
		bool	operator>(Fixed const &ptr);
		bool	operator<=(Fixed const &ptr);
		bool	operator>=(Fixed const &ptr);
		bool	operator==(Fixed const &ptr);
		bool	operator!=(Fixed const &ptr);

		Fixed const min(int const a, int const b);
		Fixed const	max(int const a, int const b);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream &i, Fixed const &fixed);
Fixed const		&min(int const a, int const b);
Fixed const		&max(int const a, int const b);

#endif
