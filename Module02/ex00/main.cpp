/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:13:42 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/07 14:57:43 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	Fixed b ( a );
	Fixed c;

	c = a;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	/*
	 * copy constructor
	 * b = a and b( a )	
	 * copy assigment operator
	 * b = a and b.operator=(a)
	*/
	return 0;
}
