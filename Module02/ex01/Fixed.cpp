/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:33:02 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/10 11:34:10 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_FractionalBits = 8;

Fixed::Fixed( void ) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &other ){
	std::cout << "Copy constructor called" << std::endl;
	_value = other._value;
}

Fixed::Fixed( const int n ) {
	std::cout << "Int constructor called" << std::endl;
	_value = n << _FractionalBits;
}

Fixed::Fixed( const float FloatValue ) {
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(FloatValue * (1 << _FractionalBits));
}
// copy assignmet operator overload
Fixed & Fixed::operator=( const Fixed Other ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = Other._value;
	return *this;
}

float	Fixed::toFloat( void ) const {
	return (float)_value / (1 << _FractionalBits);
}

int	Fixed::toInt( void ) const{
	return _value / (1 << _FractionalBits);
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return Fixed::_value;
}

void	Fixed::setRawBits( int const raw ) { _value = raw; }

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<( std::ostream &output, const Fixed &Other ){
	output << Other.toFloat();
	return output;
}
