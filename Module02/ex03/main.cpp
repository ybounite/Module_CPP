/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:06:42 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/11 11:57:53 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

int	main() {
	
	Point a(2, 3);
	Point b(4, 6);
	Point c(5, 3);
	Point inside(4, 5);
	Point edge(3,5);
	Point outside(1,1);
	/*
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);
	Point inside(3, 3);
	Point outside(10, 10);
	Point edge(0, 5);
	*/
	std::cout << "The point is " << (bsp(a, b, c, inside) ? "INSIDE" : "OUTSIDE") << " the triangle" << std::endl;
	std::cout << "The point is " << (bsp(a, b, c, outside)? "INSIDE" : "OUTSIDE") << " the triangle"<< std::endl;
	std::cout << "The point is " << (bsp(a, b, c, edge)? "INSIDE" : "OUTSIDE") << " the triangle" << std::endl;
	return 0;
}
