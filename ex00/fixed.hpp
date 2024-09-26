
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_nbr;
	static int	_bits;
public:
	Fixed();
	Fixed(Fixed const &ptr);
	~Fixed();
	Fixed&	operator=(Fixed const &ptr);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
