# include "Header.hpp"
# include "MateriaSource.hpp"
int main()
{
    IMateriaSource* src = new MateriaSource();
    // defult Materia Source 
    // learne [0..3] is Null 

    src->learnMateria(new Ice());
    // 
    src->learnMateria(new Cure());
    // 
    ICharacter* me = new Character("me");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}