// LeagueOfLegends.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Fighter.h"
int main()
{
	Fighter elso("Jancsi", 50);
	Fighter masodik("Bela", 60);
	Weapon sorosuveg("SorosUveg", 10, 1);
	Weapon kes("Kes", 30, 2);
	
	elso.addWeapon(&sorosuveg);
	masodik.addWeapon(&kes);
	elso.print();
	masodik.print();
	elso.attack(masodik);
	//std::cout << "A megsebzett haros hp-ja: " << masodik.getHp() << std::endl;
	elso.print();
	masodik.print();

	elso.attack(masodik);
	elso.print();
	masodik.print();

	//std::cout << "A megsebzett haros hp-ja: " << masodik.getHp() << std::endl;
	masodik.attack(elso);
	elso.print();
	masodik.print();

	masodik.attack(elso);
	elso.print();
	masodik.print();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
