/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:13:52 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/17 11:41:53 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/Dog.hpp"

Dog::Dog( void ) : _Brain( new Brain()){

	setType("DOG");
	this->_Brain->setIdeasIndex(100, this->_type);
	std::cout << getType() << " constructors has been called" << std::endl;
}

Dog::Dog( const Dog &other ) : Animal( other ), _Brain( new Brain(*other._Brain)){

	std::cout << getType() << " copy constructor has been called" << std::endl;
}

Dog & Dog::operator=( const Dog &Other ) {

	if (this != &Other) {
		*this->_Brain = *Other._Brain;
		this->_type = Other._type;
	}
	std::cout << getType() << " copy assignment has been called" << std::endl;
	return *this;
}


void	Dog::makeSound( void ) const {
	std::cout << "Woof Woof Woof 🐕" << std::endl;
}

Dog::~Dog( void ) {
	delete _Brain;
	std::cout << getType() << " destructors has been called" << std::endl;
}
