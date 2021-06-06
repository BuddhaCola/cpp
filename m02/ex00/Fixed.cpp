#include "fixed.hpp"

int Fixed::getRawBits()
{
	return(this->_value);
}

Fixed &	Fixed::operator=( Fixed const & orig )
{
	this->_value = orig._value;
	std::cout << "Assignation operator called" << std::endl;
	return(*this);
}

Fixed::Fixed(Fixed &orig)
{
	*this = orig;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed()
{
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}