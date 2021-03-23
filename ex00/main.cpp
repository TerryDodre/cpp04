#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Random.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Random billy("Billy");

	std::cout << robert << jim << joe << billy;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(billy);
	return 0;
}