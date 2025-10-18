/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:06:05 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/16 17:16:59 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/WrongCat.hpp"

WrongCat::WrongCat( void )  {
	_type = "WrongCat";
	std::cout << "WrongCat Default constructors has been called\n";
}

WrongCat::WrongCat( const WrongCat &Other ) : WrongAnimal(Other) {
	std::cout << "WrongCat copy constructor has been called" << std::endl;
}

WrongCat & WrongCat::operator=( const WrongCat &Other ) {
	std::cout << getType() << " copy assignment has been called" << std::endl;
	if (this != &Other)
		this->_type = Other._type;
	return *this;
}

WrongCat::~WrongCat( void ) {

	std::cout << getType() << " destructors has been called" << std::endl;
}

void	WrongCat::makeSound( void ) {

	std::cout << "Meow Meow Meow 🐱" << std::endl;
}
