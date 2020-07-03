// Zad4C.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <windows.h>
#include <string>
#include <Shellapi.h>
#include "Astronomia.h"
#include "Informatyka.h"
using namespace std;

int main()
{
	Astronomia as;
	Informatyka infa;


	int nr,nr2;
	bool w = true;
	
	do
	{
		system("cls");
		cout << "Dziedziny:\n";
		cout << "(1) Astronomia\n";
		cout << "(2) Informatyka\n";
		cout << "(0) Zamkniecie programu\n";
		cout << "Jaka dziedzina naukowa Cie interesuje? (wybierz numer): ";
		cin >> nr;
		switch (nr)
		{
		case 1:
			cout << "(1) Ogolne informacje o astronimii\n";
			cout << "(2) Astronomia na UL\n";
			cout << "(0) Jednak nie astronimia\n";
			cout << "Wybor: ";
			cin >> nr2;
			switch (nr2)
			{
			case 1:
				as.info_www();
				break;
			case 2:
				as.uczel_www();
				break;
			case 0:
				break;
			default:
				cout << "Dokonano niewlasciwego wyboru!\n";
				system("pause");
				break;
			}
			break;
		case 2:
			cout << "(1) Ogolne informacje o informatyce\n";
			cout << "(2) Informatyka na UL\n";
			cout << "(0) Jednak nie informatyka\n";
			cout << "Wybor: ";
			cin >> nr2;
			switch (nr2)
			{
			case 1:
				infa.info_www();
				break;
			case 2:
				infa.uczel_www();
				break;
			case 0:
				break;
			default:
				cout << "Dokonano niewlasciwego wyboru!\n";
				system("pause");
				break;
			}
			break;
		case 0:
			cout << "Do zobaczenia\n";
			w = false;
			break;
		default:
			cout << "Dokonano niewlasciwego wyboru!\n";
			system("pause");
			break;
		}
		
	} while (w);

	return 0;
}

