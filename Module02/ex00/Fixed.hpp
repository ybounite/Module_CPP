/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:34:30 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/07 14:34:33 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
// ************************************************************************** //
//                               FIXED Class                                  //
// ************************************************************************** //

class Fixed {


public:

	Fixed( void );
	Fixed( const Fixed &other );
	Fixed & operator=( const Fixed &Other );
	~Fixed( void );

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );

private:

	int			_value;
	static const int	_FractionalBits;
};
