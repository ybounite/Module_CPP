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
	std::cout << getType() << " constructors has been called\n";
}

Dog::Dog( const Dog &other ) : Animal( other ), _Brain( new Brain()){
	*this->_Brain = *other._Brain;
	std::cout << getType() << " copy constructor has been called" << std::endl;
}

Dog & Dog::operator=( const Dog &Other ) {
	this->_type = Other._type;
	return *this;
}


void	Dog::makeSound( void ) const {
	std::cout << "Woof Woof Woof 🐕" << std::endl;
}

Dog::~Dog( void ) {
	delete _Brain;
	std::cout << getType() << " destructors has been called" << std::endl;
}
