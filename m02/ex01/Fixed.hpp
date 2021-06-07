#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					_value;
		static const int	_fractBits = 8;
	public:
		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		Fixed(const int &nu);
		Fixed(const float &nu);
		Fixed	&operator = ( Fixed const & orig );
		Fixed(const Fixed &orig);
		Fixed();
		~Fixed();
};
std::ostream & operator << (std::ostream &out, Fixed const & current );

#endif
