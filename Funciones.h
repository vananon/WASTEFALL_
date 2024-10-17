#pragma once
#pragma once
#include <iostream>
#include "conio.h"

using namespace std;
using namespace System;

#define c1 "\x1B[38;2;0;0;0m"
#define c2 "\x1B[38;2;255;255;255m"
#define c3 "\x1B[38;2;218;233;248m"
#define c4 "\x1B[38;2;163;222;19m"
#define c5 "\x1B[38;2;109;184;66m"
#define c6 "\x1B[38;2;0;139;62m"
#define c7 "\x1B[38;2;181;101;36m"
#define c8 "\x1B[38;2;125;66;20m"
#define c9 "\x1B[38;2;74;55;59m"
#define c10 "\x1B[38;2;149;86;58m"
#define c11 "\x1B[38;2;122;62;48m"
#define c12 "\x1B[38;2;105;202;13m"
#define c13 "\x1B[38;2;146;208;80m"
#define c14 "\x1B[38;2;245;232;91m"
#define c15 "\x1B[38;2;244;190;2m"
#define c16 "\x1B[38;2;131;206;216m"
#define c17 "\x1B[38;2;162;217;230m"
#define c18 "\x1B[38;2;199;228;235m"
#define c19 "\x1B[38;2;255;255;255m"
#define c20 "\x1B[38;2;255;0;0m"
#define c21 "\x1B[38;2;192;0;0m"
#define c22 "\x1B[38;2;235;188;114m"
#define c23 "\x1B[38;2;255;192;0m"
#define c24 "\x1B[38;2;227;0;0m"
#define c25 "\x1B[38;2;184;0;0m"
#define c26 "\x1B[38;2;153;0;0m"
#define c27 "\x1B[38;2;99;0;0m"
#define c28 "\x1B[38;2;255;61;61m"
#define c29 "\x1B[38;2;222;42;42m"
#define c30 "\x1B[38;2;189;34;34m"
#define c31 "\x1B[38;2;150;41;41m"
#define c32 "\x1B[38;2;1;0;56m"
#define c33 "\x1B[38;2;4;0;255m"
#define c34 "\x1B[38;2;57;54;255m"
#define c35 "\x1B[38;2;4;0;214m"
#define c36 "\x1B[38;2;46;43;214m"
#define c37 "\x1B[38;2;3;0;168m"
#define c38 "\x1B[38;2;43;41;171m"
#define c39 "\x1B[38;2;2;0;125m"
#define c40 "\x1B[38;2;35;34;125m"
#define c41 "\x1B[38;2;128;128;128m"
#define c42 "\x1B[38;2;191;191;191m"
#define c43 "\x1B[38;2;82;41;8m"
#define c44 "\x1B[38;2;66;32;4m"
#define c45 "\x1B[38;2;160;43;147m"
#define c46 "\x1B[38;2;80;179;23m"
#define c47 "\x1B[38;2;247;223;183m"
#define RESET   "\x1b[0m"

//BACKGROUND
#define cc1 "\x1B[48;2;0;0;0m"
#define cc18 "\x1B[48;2;199;228;235m"
#define cc22 "\x1B[48;2;235;188;114m"
#define cc47 "\x1B[48;2;247;223;183m"

void cursor(int x, int y) {
	Console::SetCursorPosition(x, y);
}

void ventana() {
	Console::SetWindowSize(161, 45);
	Console::CursorVisible = false;
}

void colores(int op) {
	switch (op) {
	case 1:
		cout << c1 << char(219) << RESET;
		break;
	case 2:
		cout << c2 << char(219) << RESET;
		break;
	case 3:
		cout << c3 << char(219);
		break;
	case 4:
		cout << c4 << char(219);
		break;
	case 5:
		cout << c5 << char(219) << RESET;
		break;
	case 6:
		cout << c6 << char(219) << RESET;
		break;
	case 7:
		cout << c7 << char(219) << RESET;
		break;
	case 8:
		cout << c8 << char(219) << RESET;
		break;
	case 9:
		cout << c9 << char(219) << RESET;
		break;
	case 10:
		cout << c10 << char(219) << RESET;
		break;
	case 11:
		cout << c11 << char(219) << RESET;
		break;
	case 12:
		cout << c12 << char(219) << RESET;
		break;
	case 13:
		cout << c13 << char(219) << RESET;
		break;
	case 14:
		cout << c14 << char(219) << RESET;
		break;
	case 15:
		cout << c15 << char(219) << RESET;
		break;
	case 16:
		cout << c16 << char(219) << RESET;
		break;
	case 17:
		cout << c17 << char(219) << RESET;
		break;
	case 18:
		cout << c18 << char(219) << RESET;
		break;
	case 19:
		cout << c19 << char(219) << RESET;
		break;
	case 20:
		cout << c20 << char(219) << RESET;
		break;
	case 21:
		cout << c21 << char(219) << RESET;
		break;
	case 22:
		cout << c22 << char(219) << RESET;
		break;
	case 23:
		cout << c23 << char(219) << RESET;
		break;
	case 24:
		cout << c24 << char(219) << RESET;
		break;
	case 25:
		cout << c25 << char(219) << RESET;
		break;
	case 26:
		cout << c26 << char(219) << RESET;
		break;
	case 27:
		cout << c27 << char(219) << RESET;
		break;
	case 28:
		cout << c28 << char(219) << RESET;
		break;
	case 29:
		cout << c29 << char(219) << RESET;
		break;
	case 30:
		cout << c30 << char(219) << RESET;
		break;
	case 31:
		cout << c31 << char(219) << RESET;
		break;
	case 32:
		cout << c32 << char(219) << RESET;
		break;
	case 33:
		cout << c33 << char(219) << RESET;
		break;
	case 34:
		cout << c34 << char(219) << RESET;
		break;
	case 35:
		cout << c35 << char(219) << RESET;
		break;
	case 36:
		cout << c36 << char(219) << RESET;
		break;
	case 37:
		cout << c37 << char(219) << RESET;
		break;
	case 38:
		cout << c38 << char(219) << RESET;
		break;
	case 39:
		cout << c39 << char(219) << RESET;
		break;
	case 40:
		cout << c40 << char(219) << RESET;
		break;
	case 41:
		cout << c41 << char(219) << RESET;
		break;
	case 42:
		cout << c42 << char(219) << RESET;
		break;
	case 43:
		cout << c43 << char(219) << RESET;
		break;
	case 44:
		cout << c44 << char(219) << RESET;
		break;
	case 45:
		cout << c45 << char(219) << RESET;
		break;
	case 46:
		cout << c46 << char(219) << RESET;
		break;
	case 47:
		cout << c47 << char(219) << RESET;
		break;
	}
}

int** Matriz(int y, int x) {
	int** aux = new int* [y];
	for (int i = 0; i < y; i++) {
		aux[i] = new int[x];
	}
	return aux;
}

bool Colision(int x1, int x2, int y1, int y2) {
	if (x1 < x2 + 4 && x1 + 4 > x2 && y1 < y2 + 4 && y1 + 4> y2)return true;
	return false;
}
void dibujar(int** Matriz, int x, int y, int width, int leght, int fondo) {
	for (int i = 0; i < leght; i++) {
		cursor(x, y + i);
		for (int j = 0; j < width; j++) {
			if (Matriz[i][j] == 0)
			{
				colores(fondo);
			}
			else
			{
				colores(Matriz[i][j]);
			}
		}
	}
	cursor(3, 35);
	//cursor(0, 0);
}

void grass(int x, int y, int w, int l, int dx, int dy) {
	//cout << c4;
	colores(4);

	int k;
	if (dx == 0 && dy == 0)return;

	if (dx != 0) {
		for (int i = 0; i < l; i++) {
			k = (dx == -1) * (w - 1);
			cursor(x + k, y + i); cout << char(219);
		}
	}
	else if (dy != 0) {
		for (int i = 0; i < w; i++) {
			k = (dy == -1) * (l - 1);
			cursor(x + i, y + k); cout << char(219);
		}
	}
	cursor(3, 35);
}

void borrar(int x, int y, int w, int l, int op) { // op 1 = GRASS // op 0: COLOR CONTROL 
	op = (op == 1) * 4 + (op == 0) * 3;
	colores(op);
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < w; j++) {
			cursor(x + j, y + i); cout << char(219);
		}
	}
	cursor(3, 8);
}

char error()
{
	char tecla2;
	do
	{
		system("cls");
		cout << cc1;
		cursor(75, 24); cout << c20 << "ERROR!";
		cursor(55, 25); cout << c20 << "Tecla incorrecta, presiona [Esc] para volver al menu";

		tecla2 = _getch();

	} while (tecla2 != char(27));

	return tecla2;
}
