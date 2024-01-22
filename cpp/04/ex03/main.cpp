#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

// void	check_leak(void)
// {
// 	system("leaks Ex03");
// }

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("hi"); //invalid
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob); //invalid


	Character *tmp1 = (Character *)me;
	AMateria *floor = tmp1->getMateria(0);
	delete floor;

	me->unequip(0);
	me->use(0, *bob);
	me->unequip(3); //invalid
	
	delete bob;
	delete me;
	delete src;
	// atexit(check_leak);
	return 0;
}