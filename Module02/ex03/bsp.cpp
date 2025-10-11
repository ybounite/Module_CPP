/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 07:26:16 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/11 11:12:59 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"


bool bsp( Point const a, Point const b, Point const c, Point const p ) {


	float	ABC = Point::TriangleArea(a, b, c);
	float	PAB = Point::TriangleArea(a, b, p);
	float	PBC = Point::TriangleArea(b, c, p);
	float	PAC = Point::TriangleArea(a, c, p);

	if (PAB == 0.0f || PBC == 0.0f || PAC == 0.0f)
		return false;
	return (ABC == PAB + PAC + PBC);
}
