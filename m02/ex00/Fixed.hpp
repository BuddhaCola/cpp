#include <iostream>

class Fixed {
	private:
	int					_value;
	static const int	_bits = 8;
	public:
		int	getRawBits();
		void	setRawBits();
		
		Fixed &	operator=( Fixed const & orig );

		Fixed(Fixed &orig);
		Fixed();
		~Fixed();
};