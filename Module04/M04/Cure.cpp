# include "Header.hpp"


Cure::Cure() : _name("cure") {
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &Other) : AMateria(Other), _name(Other._name) {
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &Other) {
    std::cout << "Cure assignment operator called" << std::endl;
    if (this != &Other) {
        this->_name = Other._name;
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
