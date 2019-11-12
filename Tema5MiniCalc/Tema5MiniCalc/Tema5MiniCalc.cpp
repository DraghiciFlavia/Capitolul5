// Tema5MiniCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Operatii.h"
#include <stdlib.h>

void Meniu()
{
	std::cout << "Introdu operatia pe care vrei sa o aplici\n ";
	std::cout << "1 Adunare\n";
	std::cout << "2 Scadere\n";
	std::cout << "3 Inmultire\n";
	std::cout << "4 Impartire\n";
	std::cout << "5 Modulo\n";
}

int main()
{
	short op;
	int nr1, nr2;
	Meniu();
	std::cin >> op;
	while (op > 0 && op <6)
	{
		std::cout << "Introdu primul numar intreg\n";
		std::cin >> nr1;
		std::cout << "Introdu al doilea numar intreg\n";
		std::cin >> nr2;
		break;
	}

	switch (op)
	{
	case 1: std::cout << "Rezultatul operariei este " << Adunare(nr1, nr2); break;
	case 2: std::cout << "Rezultatul operatiei este " << Scadere(nr1, nr2); break;
	case 3: std::cout << "Rezultatul operatiei este " << Inmultire(nr1, nr2); break;
	case 4: std::cout << "Rezultatul operatiei este " << Impartire(nr1, nr2); break;
	case 5: std::cout << "Rezultatul operatiei este " << Modulo(nr1, nr2); break;
	default: std::cout << "Ati introdus valoarea unei peratii care nu exista!"; break;
	}
}