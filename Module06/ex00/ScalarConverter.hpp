/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:54:22 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/30 20:01:56 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <cstdlib> 
# include <cmath>
# include <climits>
# include <limits>
#include <iomanip> 
// ************************************************************************** //
//                            ScalarConverter Class                           //
// ************************************************************************** //

class  ScalarConverter {

public:
	ScalarConverter( void );
	ScalarConverter( const ScalarConverter &Other );
	ScalarConverter	&operator=( const ScalarConverter &Other );
	~ScalarConverter( void );
	static	void	convert( std::string literal );
	static	void	convertToChar( const double value );
	static	void	convertToInt( const double  value );
	static	void	convertToFloat( const double value );
	static	void	convertToDouble(const double value );
};
