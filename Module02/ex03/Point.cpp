/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:07:29 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/11 11:47:09 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point( void ) : _x(0) , _y(0) {
}

Point::Point( const float FloatingNum1, const float FloatingNum2 ) : _x( FloatingNum1 ) , _y( FloatingNum2 ) {
}

Point::Point( const Point &Other ) : _x( Other._x ) , _y( Other._y ) {
}

Point &Point::operator=( const Point &Other ) {
	(void)Other;
	return *this;
}

Fixed	Point::getX( void ) const { return this->_x; }

Fixed	Point::getY( void ) const { return this->_y; }

float	Point::getValueFixedX( void ) const { return this->_x.toFloat(); }

float	Point::getValueFixedY( void ) const { return this->_y.toFloat(); }

Point::~Point() {}

float	Point::TriangleArea( Point const &a, Point const &b, Point const &c ) {
	float area = std::fabs(a.getValueFixedX() * (b.getValueFixedY() - c.getValueFixedY()) +
		b.getValueFixedX() * (c.getValueFixedY()- a.getValueFixedY()) +
		c.getValueFixedX() * (a.getValueFixedY() - b.getValueFixedY()));
	return area * 0.5f;
}
