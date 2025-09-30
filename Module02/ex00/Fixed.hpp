#pragma once

# ifndef __FIXED_H__
# define __FIXED_H__

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

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:

	int					_value;
	static const int	_FractionalBits;
};

#endif
