#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;

    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;

    std::cout << "\n////////////////////////////////////////\n" << std::endl;

	ISpaceMarine*       A = new AssaultTerminator;
    ISpaceMarine*       B = new TacticalMarine;
    ISpaceMarine*       C = new AssaultTerminator;
    ISpaceMarine*       D = new TacticalMarine;
    ISpaceMarine*       E = new AssaultTerminator;
    ISpaceMarine*       F = new TacticalMarine;


	Squad*				Team1 = new Squad;
    Squad*				Team2 = new Squad;

	Team1->push(A);
	Team1->push(B);
    Team1->push(C);
    Team1->push(D);
    //  Ces push ne doivent pas fonctionner
    Team1->push(A);
    Team1->push(NULL);

    // Team1
    std::cout << std::endl;
    for (int i = 0; i < Team1->getCount(); ++i)
    {
        ISpaceMarine* t1 = Team1->getUnit(i);
        t1->battleCry();
    }
    std::cout << std::endl;

    // Team2
    Team2->push(E);
    Team2->push(F);
    for (int i = 0; i < Team2->getCount(); ++i)
    {
        ISpaceMarine* t2 = Team2->getUnit(i);
        t2->battleCry();
    }
    std::cout << std::endl;

	delete Team1;
    delete Team2;

    return (0);
}
