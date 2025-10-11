/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:47:53 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/11 11:11:39 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include <iostream>
# include <string>
# include "Fixed.hpp"
// ************************************************************************** //
//                               FIXED Class                                  //
// ************************************************************************** //

class Point {


public:
	// defualt constructor
	Point( void );
	// constructor
	Point( const float FloatingNum1, const float FloatingNum2 );
	// copy constructor
	Point( const Point &Other );
	//copy assignment operator overload
	Point	&operator=( const Point &Other );
	// destructor
	~Point();

	float	operator-( Point &Other);
	Fixed	getX( void ) const;
	Fixed	getY( void ) const;
	float	getValueFixedY( void ) const;
	float	getValueFixedX( void ) const;
	static float	TriangleArea( Point const &a, Point const &b, Point const &c );
private:
	const Fixed	_x;
	const Fixed	_y;
};

bool bsp( Point const a, Point const b, Point const c, Point const p);
