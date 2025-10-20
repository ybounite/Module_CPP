# include "Header.hpp"

Ice::Ice() : _name("ice") {
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &Other) : AMateria(Other), _name(Other._name) {
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &Other) {
    std::cout << "Ice assignment operator called" << std::endl;
    if (this != &Other) {
        this->_name = Other._name;
        AMateria::operator=(Other);
    }
    return *this;
}

Ice::~Ice() {
    std::cout << "Cure destructor has been called" << std::endl;
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}