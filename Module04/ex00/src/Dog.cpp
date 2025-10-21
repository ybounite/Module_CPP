/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:13:52 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/15 18:58:33 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/Dog.hpp"

Dog::Dog( void ) {

	setType("DOG");
	std::cout << getType() << " Default constructors has been called\n";
}

Dog::Dog( const Dog &other ) : Animal( other ) {
	std::cout << getType() << " copy constructor has been called" << std::endl;
}

Dog & Dog::operator=( const Dog &Other ) {

	std::cout << getType() << " copy assignment has been called" << std::endl;
	this->_type = Other._type;
	return *this;
}


void	Dog::makeSound( void ) const {

	std::cout << "Woof Woof Woof 🐕" << std::endl;
}

Dog::~Dog( void ) {

	std::cout << getType() << " destructors has been called" << std::endl;
}
