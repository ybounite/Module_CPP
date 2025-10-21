/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:46:21 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/21 08:46:28 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/Header.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &Other) : AMateria(Other._type) {
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &Other) {
    std::cout << "Cure assignment operator called" << std::endl;
    if (this != &Other) {
        this->_type = Other._type;
        AMateria::operator=(Other); // If AMateria has assignment logic
    }
    return *this;
}


Cure::~Cure() {
    std::cout << "Cure destructor has been called" << std::endl;
}

AMateria* Cure::clone() const {
    return new Cure(*this); // Use copy constructor
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
