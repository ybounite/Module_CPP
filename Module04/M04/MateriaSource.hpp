# pragma once 

# include "Header.hpp"

class MateriaSource : public IMateriaSource
{

private:
    AMateria* _learned[4];

public:
    MateriaSource();
    MateriaSource( const MateriaSource &Other);
    MateriaSource & operator=( const MateriaSource &Other);
    ~MateriaSource();

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};