# include "Header.hpp"
class Ice : public AMateria {
private:
    std::string _name;
public:
    Ice();
    Ice( const Ice &Other);
    Ice &operator=(const Ice &Other);
    ~Ice();
    void use(ICharacter& target);
    AMateria* clone() const;

};