#include "Fixed.hpp"

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_value);
}

void	Fixed::setRawBits( int const raw )
{
	_value = raw;
}

Fixed &	Fixed::operator = ( Fixed const & orig )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = orig.getRawBits();
	return(*this);
}

Fixed::Fixed(Fixed &orig)
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