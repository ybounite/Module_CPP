/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:26:44 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/16 17:17:58 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/Cat.hpp"

Cat::Cat( void ) : _Brain( new Brain()) {

	this->setType("Cat");
	this->_Brain->setIdeasIndex(100, this->_type);
	std::cout << getType() << " Default constructors has been called" << std::endl;
}

Cat::Cat( const Cat &other ) : Animal( other ), _Brain( new Brain(*other._Brain)) {
	std::cout << getType() << " copy constructor has been called" << std::endl;
}

Cat & Cat::operator=( const Cat &Other ) {

	if (this != &Other) {
		this->_type = Other._type;
		*this->_Brain =  *Other._Brain;
	}
	std::cout << getType() << " copy assignment has been called" << std::endl;
	return *this;
}

Cat::~Cat( void ) {
	delete _Brain;
	std::cout << getType() << " destructors has been called" << std::endl;
}

void	Cat::makeSound( void ) const {

	std::cout << "Meow Meow Meow 🐱" << std::endl;
}


