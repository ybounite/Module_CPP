#include "Fixed.hpp"

const int Fixed::_FractionalBits = 8;

Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n ) 
{
	std::cout << "Int constructor called" << std::endl;
	_value = n << _FractionalBits;
}
/*
Fixed::Fixed( const float FloatPoint)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(1 <<  )
}

Fixed( const Fixed &other );

	Fixed & operator=( const Fixed &Other );
*/
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
