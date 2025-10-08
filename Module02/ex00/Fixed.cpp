/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:09:23 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/06 16:11:26 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_FractionalBits = 8;
// default constructor 
Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}
// copy constructor
Fixed::Fixed( const Fixed &other )
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = other._value;
}
// copy assignment 
Fixed & Fixed::operator=( const Fixed &Other )
{
	std::cout << "Copy assignment operator calle\n";
	if (this != &Other)
		this->_value = Other.getRawBits();
	return *this;
}
// destructor
Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}
// getter 
int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return _value;
}
// setter
void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

