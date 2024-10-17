#include "pch.h"
#include "iostream"
#include "Mapa.h"
#include "Menu.h"

using namespace System;
using namespace std;


int main()
{
	srand(time(nullptr));
	ventana();

	Index* index = new Index();

	char tecla1, tecla2;

	do
	{
		index->dibujarMenu();
		Letras_menu();

		if (_kbhit)
		{
			tecla1 = _getch();

			switch (tecla1)
			{
			case'1':
				if (juego()) {
					tecla2 = dibujarGanaste(); break;
				}
				else {
					tecla2 = dibujarPerdiste(); break;
				}
			case'2':
				Instrucciones();
				tecla2 = _getch();
				break;

			case'3':
				Creditos();
				tecla2 = _getch();
				break;

			case'4':
				exit(0);
				break;

			default:
				tecla2 = error();
				break;
			}
		}

	} while (tecla1 != '4');

	system("pause>0");
	return 0;
}

