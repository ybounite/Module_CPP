/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:46:12 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/21 08:46:14 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/Header.hpp"

AMateria::AMateria() : _type("Default") {

}

AMateria::AMateria( std::string const & type ) : _type(type){

}

AMateria::AMateria( const AMateria &Other ) : _type(Other._type){

}

AMateria &AMateria::operator=( const AMateria &Other) {
    this->_type = Other._type;
    return *this;
}

AMateria::~AMateria() {

}


std::string const & AMateria::getType() const { return _type; }

void AMateria::use(ICharacter& target) {
	std::cout << "Default attack (no type) on " << target.getName() << std::endl;
}
