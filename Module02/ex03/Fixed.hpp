/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:45:06 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/10 14:45:07 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <cmath>
// ************************************************************************** //
//                               FIXED Class                                  //
// ************************************************************************** //

class Fixed {


public:

	Fixed( void );
	Fixed( const Fixed &other );
	Fixed & operator=( const Fixed &Other );
	~Fixed( void );

	Fixed( const int value );
	Fixed( const float value );
	int	getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int	toInt( void ) const;

	// member function comparison operators: >, <, >=, <=, == and !=.
	bool	operator==( const Fixed &Other );
	bool	operator!=( const Fixed &Other );
	bool	operator<=( const Fixed &Other );
	bool	operator>=( const Fixed &Other );
	bool	operator<( const Fixed &Other ) const;

	// member arithmetic operators
	
	Fixed	operator+( const Fixed &Other );
	Fixed	operator-( const Fixed &Other );
	Fixed	operator*( const Fixed &Other );
	Fixed	operator/( const Fixed &Other );

	// member 2 pre-(increment/decrement)
	Fixed	&operator++();
	Fixed	&operator--();
	// two member post-(increment/decrement)
	Fixed	operator++(int);
	Fixed	operator--(int);

	// overload member function 
	static Fixed	&min( Fixed &fixed1, Fixed &fixed2 );
	static Fixed	&max( Fixed &fixed1, Fixed &fixed2 );
	const static Fixed	&min( const Fixed &fixed1, const Fixed &fixed2 );
	const static Fixed	&max( const Fixed &fixed1, const Fixed &fixed2 );
private:

	int			_value;
	static const int	_FractionalBits;
};

std::ostream &operator<<(std::ostream &cou, const Fixed &Other);

