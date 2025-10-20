/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:31:35 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/15 19:02:22 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/Animal.hpp"

Animal::Animal( void ) : _type("Animal") {
	std::cout << "Animal Default constructors has been called\n";
}

Animal::Animal( std::string type ) : _type(type) {

}

Animal::Animal( const Animal &Other ) {
	std::cout << "Animal copy constructor has been called" << std::endl;
	this->_type = Other._type;
}

Animal & Animal::operator=( const Animal &Other ) {
	std::cout << "Animal copy assignment has been called" << std::endl;
	if (this != &Other)
		this->_type = Other._type;
	return *this;
}

const std::string Animal::getType( void ) const { return _type; }

void		Animal::setType( const std::string type ) { this->_type = type; }

Animal::~Animal( void ) {
	std::cout << "Animal destructors has been called" << std::endl;
}

