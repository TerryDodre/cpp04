#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    
    AMateria*	iceTmp;
	AMateria*	cureTmp;

    iceTmp = src->createMateria("ice");
    me->equip(iceTmp);
    std::cout << "equip " << iceTmp->getType() << std::endl;
    cureTmp = src->createMateria("cure");
    me->equip(cureTmp);
    std::cout << "equip = " << cureTmp->getType() << std::endl;
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    std::cout << iceTmp->getType() << " xp = " << cureTmp->getXP() << std::endl;
    std::cout << cureTmp->getType() << " xp = " << cureTmp->getXP() << std::endl;

    me->use(0, *bob);
    std::cout << iceTmp->getType() << " xp = " << cureTmp->getXP() << std::endl;
    std::cout << cureTmp->getType() << " xp = " << cureTmp->getType() << std::endl;

	delete bob;
	delete me;
	delete src;

	return 0;
}
