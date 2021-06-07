#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int					_value;
		static const int	_bits = 8;
	public:
		int		getRawBits() const;
		void	setRawBits( int const raw );
		
		Fixed	&operator = ( Fixed const & orig );
		Fixed(Fixed &orig);
		Fixed();
		~Fixed();
};

#endif
