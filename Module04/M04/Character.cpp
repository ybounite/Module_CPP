# include "Header.hpp"

Character::Character() : _name("Defaut"){
    std::cout << "Character created with default constructor" << std::endl;
    for (short i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character( std::string name ) : _name(name) {
    for (short i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    std::cout << "Character constructor has been called" << std::endl;
}

// Implement deep copy in copy constructor and assignment operator by cloning Materia.
Character::Character( const Character &Other ) : _name(Other._name){
    if (this != &Other) {
        for (short i = 0; i < 4; i++)
            if (Other._inventory[i])
                this->_inventory[i] = Other._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
    }
    std::cout << "Character Copy constructor has been called" << std::endl;
}

Character & Character::operator=( const Character &Other ) {
    std::cout << "Character Copy assignment operator has been called" << std::endl;

    if (this != &Other){
        this->_name = Other._name;
        for (short i = 0; i < 4; i++){
            if (this->_inventory[i]) {
                delete this->_inventory[i];
                this->_inventory[i] = NULL;
            }
            if (Other._inventory[i])
                this->_inventory[i] = Other._inventory[i]->clone();
        }
    }
    return *this;
}

Character::~Character() {
    for (short i = 0; i < 4; i++)
        if (this->_inventory[i])
            delete this->_inventory[i];
    std::cout << "Character destroyed has been called" << std::endl;
}

std::string const & Character::getName() const { return _name; }

// They equip the Materias in the first empty slot they find
//  this member function as finish 

void Character::equip(AMateria* m) {
    /*
    *The equip function should do nothing if the inventory is full.
    *It should not overwrite existing Materia.
    *It should not add the new Materia anywhere because there is no space.
    * No errors or exceptions usually — just silently ignore.
    */
    if (!m) return ;
    for (short i = 0; i < 4; i++){
        if (_inventory[i] == NULL) {
            _inventory[i] = m;
            std::cout << "Materia " << this->_inventory[i]->getType()
                << " equipped to " << this->_name << "'s inventory at index " << i << std::endl;
            return;
        }
    }
    
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3) return ;

    if (this->_inventory[idx]) {
        std::cout << this->_name << " unequips " << this->_inventory[idx]->getType() << " (" << idx << ")" << std::endl;
        this->_inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx <= 3 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << this->_name << " doesn't do anything" << std::endl;
}