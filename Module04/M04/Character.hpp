# pragma once

# include "Header.hpp"


class Character : public ICharacter{
    AMateria    *_inventory[4];
    std::string _name;
public:
    Character();
    Character( std::string name );
    Character( const Character &Other );
    Character &operator=( const Character &Other );
    ~Character();
    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};