# include "Header.hpp"
class Cure : public AMateria {

private:
    std::string _name;

public:
    Cure();
    Cure( const Cure &Other);
    Cure & operator=(const Cure &Other);
    ~Cure();
    AMateria* clone() const;
    void use(ICharacter& target);
};