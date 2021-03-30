#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Random.hpp"

void	test()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);
}

int		main()
{
	test();

	std::cout << "\n///////////////////////////\n" << std::endl;

	Sorcerer robert("Robert", "the Magnificent");
	Random billy("Billy");

	std::cout << robert << billy;

	robert.polymorph(billy);
	return 0;
}
