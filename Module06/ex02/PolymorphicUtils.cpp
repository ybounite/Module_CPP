/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PolymorphicUtils.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:09:05 by ybounite          #+#    #+#             */
/*   Updated: 2025/11/03 17:32:19 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PolymorphicUtils.hpp"

short	GetRandomNumber(int to = 1, int from = 3) { return (rand() % (from - to + 1) + to); }

Base	* generate(void) {

	short	random = GetRandomNumber();
	if (random == 1)
		return new A();
	else if (random == 2)
		return new B();
	else
		return new C();
}

void	identify(Base* p) {

	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;	
	else
		std::cout << "Unknown type" << std::endl;
}

void	identify(Base& p) {

	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	} catch ( std::exception &e) {
		std::cout << e.what() << " is not A"<< std::endl;
	}
	try {
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}catch (std::exception &e){
		std::cout << e.what() << " is not B" << std::endl;
	}
	try {
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}catch (std::exception &e){
		std::cout << e.what() << " is not C"<< std::endl;
	}
}
