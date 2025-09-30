
#include "Fixed.hpp"

const int Fixed::_FractionalBits = 8;

Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &other )
{
	std::cout << "Copy constructor called" << std::endl;
	_value = other._value;
}

Fixed & Fixed::operator=( const Fixed &Other )
{
	std::cout << "Copy assignment operator calle\n";

	this->_value = Other.getRawBits();
	return *this;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return Fixed::_value;
}

void	Fixed::setRawBits( int const raw )
{
	_value = raw;
}