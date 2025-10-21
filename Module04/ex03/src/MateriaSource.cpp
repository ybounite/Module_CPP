/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:46:44 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/21 09:36:53 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (short i = 0; i < 4; i++)
		this->_learned[i] = NULL;
	std::cout << "MateriaSource Default constructor has been called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource &Other) {

	if (this != &Other) {
	for (short i = 0; i < 4; i++)
	    if (Other._learned[i])
		this->_learned[i] = Other._learned[i]->clone();
	    else
		this->_learned[i] = NULL;
	}
	std::cout << "MateriaSource Copy constructor has been called" << std::endl;
}

MateriaSource & MateriaSource::operator=( const MateriaSource &Other) {
    if (this != &Other) {
        for (short i = 0; i < 4; i++){
            if (this->_learned[i])
                this->_learned[i] = Other._learned[i]->clone();
            else
                this->_learned[i] = NULL;
        }
    }
    std::cout << "MateriaSource Copy assignment has been called" << std::endl;
    return *this;
}

MateriaSource::~MateriaSource() {
    for (short i = 0; i < 4; i++) {
        if (this->_learned[i])
            delete _learned[i];
    }
    std::cout << "MateriaSource destructor has been called" << std::endl;

}

void MateriaSource::learnMateria(AMateria* m) {
    if (!m) return;
    for (short i = 0; i < 4; i++) {
        if (this->_learned[i] == NULL) {
            _learned[i] = m->clone();
            std::cout << "MateriaSource has learned 📚 [" << m->getType() << "] at slot " << i << std::endl;
            return ;
        }
    }

    std::cout << "MateriaSource cannot learn [" << m->getType() << "]: inventory is full!⚠️" << std::endl;
}


AMateria* MateriaSource::createMateria(std::string const & type) {
    for (short i = 0; i < 4; ++i) {
        if (_learned[i] && _learned[i]->getType() == type) {
            std::cout << "MateriaSource creates a new [" << type << "] Materia from slot✨ " << i << std::endl;
            return _learned[i]->clone();
        }
    }
    std::cout << "MateriaSource could not create [" << type << "]: no such type learned❌ ." << std::endl;
    return NULL;
}
