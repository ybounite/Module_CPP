/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:46:07 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/08 16:25:06 by ybounite         ###   ########.fr       */
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
	Fixed( const int value );
	Fixed( const float FloatPiontNum );
	Fixed( const Fixed &other );
	Fixed & operator=( const Fixed Other );
	~Fixed( void );

	// member function that conver fixed-point value to an floating-point value
	float	toFloat( void ) const;
	// member function fixed-point value to an integer
	int	toInt( void ) const;
	int	getRawBits( void ) const;
	void	setRawBits( int const raw );

private:

	int			_value;
	static const int	_FractionalBits;
};

std::ostream& operator<<( std::ostream &output, const Fixed &Other );
