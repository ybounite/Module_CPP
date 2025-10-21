/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:01:38 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/16 17:24:36 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/WrongAnimal.hpp"


WrongAnimal::WrongAnimal( void ) : _type("Default") {

	std::cout << "WrongAnimal Default constructors has been called\n";
}

WrongAnimal::WrongAnimal( const WrongAnimal &other ) : _type(other._type) {

	std::cout << "WrongAnimal copy constructor has been called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( const WrongAnimal &Other ) {

	std::cout << "WrongAnimal copy assignment has been called" << std::endl;
	if (this != &Other)
		this->_type = Other._type;
	return *this;
}

WrongAnimal::~WrongAnimal( void ) {
	
	std::cout << "WrongAnimal destructors has been called" << std::endl;
}

const std::string	WrongAnimal::getType( void ) const { return _type; }

void			WrongAnimal::setType( std::string type ) { _type = type; }

void	WrongAnimal::makeSound( void ) {

	std::cout << "No sound for Animal" << std::endl;
}
