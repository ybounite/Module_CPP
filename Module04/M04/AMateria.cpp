# include "Header.hpp"
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

AMateria::~AMateria() {}


std::string const & AMateria::getType() const { return _type; }

void AMateria::use(ICharacter& target) {
    std::cout << "hello " << target.getName() << std::endl;
}