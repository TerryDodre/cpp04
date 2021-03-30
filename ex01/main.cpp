#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Sword.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Dragon.hpp"

int     main(void)
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << "\n///////////////////////////\n" << std::endl;

	Enemy* a = new Dragon();

	AWeapon *s = new Sword();

	me->equip(s);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	me->recoverAp();
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;


	delete me;
	delete pr;
	delete pf;
	delete s;
	return 0;
}