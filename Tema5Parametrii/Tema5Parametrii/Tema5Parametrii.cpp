// Tema5Parametrii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void Ameteala(int parSiVal,int& parTyRef, int* parTotPont)
{
	parSiVal *= 3;
	parTyRef *= 3;
	*parTotPont *= 2;
}

int main()
{
	int drunkenRat = 36;
	Ameteala(drunkenRat, drunkenRat, &drunkenRat);
	std::cout << drunkenRat;
}

