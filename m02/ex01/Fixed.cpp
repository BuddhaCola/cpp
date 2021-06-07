#include "Fixed.hpp"

float	Fixed::toFloat( void ) const
{
	return(_value / (float)(1 << _fractBits));
}

int		Fixed::toInt( void ) const
{
	return (_value >> _fractBits);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_value);
}

void	Fixed::setRawBits( int const raw )
{
	_value = raw;
}

Fixed::Fixed(const int &nu)
{
	std::cout << "Int constructor called" << std::endl;
	_value = nu << _fractBits;
}

Fixed::Fixed(const float &nu)
{
	std::cout << "float constructor called" << std::endl;
	_value = (int)std::roundf(nu * (float)(1 << _fractBits));
}

Fixed &Fixed::operator = ( const Fixed &orig )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = orig._value;
	return(*this);
}

std::ostream & operator << (std::ostream &out, Fixed const & current )
{
	out << current.toFloat();
	return (out);
}

Fixed::Fixed(const Fixed &orig)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = orig;
}

Fixed::Fixed() : _value (0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}