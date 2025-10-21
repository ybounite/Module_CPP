/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:46:35 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/21 08:46:40 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/Header.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &Other) : AMateria(Other._type) {
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &Other) {

	std::cout << "Ice assignment operator called" << std::endl;
	if (this != &Other) {
		this->_type = Other._type;
		AMateria::operator=(Other);
	}
	return *this;
}

Ice::~Ice() {
	std::cout << "Cure destructor has been called" << std::endl;
}

AMateria* Ice::clone() const { return new Ice(*this); }

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
