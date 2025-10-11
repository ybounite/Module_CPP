/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:18:08 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/11 12:00:23 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_FractionalBits = 8;

Fixed::Fixed( void ) : _value(0) {}

Fixed::Fixed( const int value ) {
	_value = value << _FractionalBits;
}

Fixed::Fixed( const float value ) {
	_value = roundf(value * (1 << _FractionalBits));
}

Fixed::Fixed( const Fixed &Other ) {
	this->_value = Other._value;
}

Fixed & Fixed::operator=( const Fixed &Other ) {
	this->_value = Other._value;
	return *this;
}

// member function

int	Fixed::getRawBits( void ) const { return _value; }

void	Fixed::setRawBits( int const raw ) { _value = raw; }

// member function that conver fixed-point value to an floating-point value
float	Fixed::toFloat( void ) const{
	return (float)_value / (1 << _FractionalBits);
}

int	Fixed::toInt( void ) const{
	return _value/ (1 << _FractionalBits);
}

// member function comparison operators: >, <, >=, <=, == and !=.
bool	Fixed::operator==( const Fixed &Other ) const { return this->toFloat() == Other.toFloat(); }
bool	Fixed::operator!=( const Fixed &Other ) const { return this->toFloat() != Other.toFloat(); }
bool	Fixed::operator<=( const Fixed &Other ) const { return this->toFloat() <= Other.toFloat(); }
bool	Fixed::operator>=( const Fixed &Other ) const { return this->toFloat() >= Other.toFloat(); }
bool	Fixed::operator<( const Fixed &Other ) const { return this->toFloat() < Other.toFloat(); }
bool	Fixed::operator>( const Fixed &Other ) const { return this->toFloat() > Other.toFloat(); }

// arithmetic operators
Fixed	Fixed::operator+( const Fixed &Other ) {
	return Fixed( this->toFloat() + Other.toFloat() );
}

Fixed	Fixed::operator-( const Fixed &Other ) {
	return Fixed( this->toFloat() - Other.toFloat() );
}

Fixed	Fixed::operator*( const Fixed &Other ) {
	return Fixed( this->toFloat() * Other.toFloat() );
}

Fixed	Fixed::operator/( const Fixed &Other ) {
	return Fixed( this->toFloat() / Other.toFloat() );
}

Fixed	&Fixed::operator++() {
	this->_value++;
	return *this;
}

Fixed	&Fixed::operator--() {
	this->_value--;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp = *this;
	this->_value++;
	return tmp;
}

Fixed	Fixed::operator--(int)	{
	Fixed	tmp = *this;
	this->_value--;
	return tmp;
}

// overload member function 
Fixed	&Fixed::min( Fixed &fixed1, Fixed &fixed2 ) {
	return (fixed1 < fixed2) ? fixed1 : fixed2;
}

Fixed	&Fixed::max( Fixed &fixed1, Fixed &fixed2 ){
	return (fixed1 < fixed2) ? fixed2 : fixed1;
}

const Fixed	&Fixed::min( const Fixed &fixed1, const Fixed &fixed2 ){
	return (fixed1 < fixed2) ? fixed1 : fixed2;
}

const Fixed	&Fixed::max( const Fixed &fixed1, const Fixed &fixed2 ) {
	return (fixed1 < fixed2) ? fixed2 : fixed1;
}

Fixed::~Fixed( void ) {}

std::ostream &operator<<(std::ostream &cout, const Fixed &Other) {
	cout << Other.toFloat();
	return cout;
}
