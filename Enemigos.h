#pragma once
#include "Mapa.h"
#include <iostream>

int MenemigoUno[9][4][4] = {
    //Matrices Enemigo Uno
    //FRENTE
    {   {41, 42, 42, 41},
        {42, 3, 3, 42},
        {1, 42, 42, 1},
        {4, 41, 41, 4}
    },

    //IZQUIERDA 1
    {   {4, 42, 42, 41},
        {4, 3, 3, 42},
        {1, 42, 42, 4},
        {4, 41, 21, 4},
    },

    //IZQUIERDA 2
    {   {4, 42, 42, 41},
        {4, 3, 3, 42},
        {1, 42, 42, 4},
        {4, 21, 41, 4}
    },

    //DERECHA 1
    {   {41, 42, 42, 4},
       {42, 3, 3, 4},
       {4, 42, 42, 1},
       {4, 41, 21, 4}
    },

    //DERECHA 2
    {   {41, 42, 42, 4},
        {42, 3, 3, 4},
        {4, 42, 42, 1},
        {4, 21, 41, 4}
    },

    //SUBIR 1
    {   {41, 42, 42, 41},
        {42, 42, 42, 42},
        {1, 42, 42, 1},
        {4, 41, 21, 4}
    },

    //SUBIR 2
    {   {41, 42, 42, 41},
        {42, 42, 42, 42},
        {1, 42, 42, 1},
        {4, 21, 41, 4}
    },

    //BAJAR 1
    {   {41, 42, 42, 41},
        {42, 3, 3, 42},
        {1, 42, 42, 1},
        {4, 41, 21, 4}
    },

    //BAJAR 2
    {   {41, 42, 42, 41},
        {42, 3, 3, 42},
        {1, 42, 42, 1},
        {4, 21, 41, 4}
    },

};

int MenemigoDos[9][4][4] = {
    //Matrices Enemigo Dos
    //FRENTE
    {   {41, 26, 26, 41},
        {26, 3, 3, 26},
        {1, 26, 26, 1},
        {4, 41, 41, 4}
    },

    //IZQUIERDA 1
    {   {4, 26, 26, 41},
        {4, 3, 3, 26},
        {1, 26, 26, 4},
        {4, 39, 41, 4}
    },

    //IZQUIERDA 2
    {   {4, 26, 26, 41},
        {4, 3, 3, 26},
        {1, 26, 26, 4},
        {4, 41, 39, 4}
    },

    //DERECHA 1
    {   {41, 26, 26, 4},
        {26, 3, 3, 4},
        {4, 26, 26, 1},
        {4, 39, 41, 4}
    },

    //DERECHA 2
    {   {41, 26, 26, 4},
        {26, 3, 3, 4},
        {4, 26, 26, 1},
        {4, 41, 39, 4}
    },

    //SUBIR 1
    {   {41, 26, 26, 41},
        {26, 26, 26, 26},
        {1, 26, 26, 1},
        {4, 39, 41, 4}
    },

    //SUBIR 2
    {   {41, 26, 26, 41},
        {26, 26, 26, 26},
        {1, 26, 26, 1},
        {4, 41, 39, 4}
    },

    //BAJAR 1
    {   {41, 26, 26, 41},
        {26, 3, 3, 26},
        {1, 26, 26, 1},
        {4, 39, 41, 4}
    },

    //BAJAR 2
    {   {41, 26, 26, 41},
        {26, 3, 3, 26},
        {1, 26, 26, 1},
        {0, 41, 39, 4}
    },

};

class Enemigos {
private:
    int** enemigo;
    int residuosEnMapa;
    int residuosYaReciclados;
    int x, y;
    int dx, dy;
    bool llegoVeinte;
    bool llegoCuarenta;
    int velocidad;
public:
    Enemigos(int numEnemigo) {
        enemigo = Matriz(4, 4);
        residuosEnMapa = 4; //Cambiar a 0
        residuosYaReciclados = 0;
        x = 152;

        if (numEnemigo == 1) {
            for (int i = 0; i < 4; i++)
                for (int j = 0; j < 4; j++) enemigo[i][j] = ::MenemigoUno[0][i][j];
            y = 10;
            dibujar(enemigo, x, y, 4, 4, 4);
            velocidad = 1000;
        }

        else {
            for (int i = 0; i < 4; i++)
                for (int j = 0; j < 4; j++) enemigo[i][j] = ::MenemigoDos[0][i][j];
            y = 31;
            dibujar(enemigo, x, y, 4, 4, 4);
            velocidad = 1000;
        }
        dx = 0;
        dy = 0;
        llegoVeinte = true;
        llegoCuarenta = true;
    }

    ~Enemigos() {
        for (int i = 0; i < 4; i++) {
            delete[] enemigo[i];
        }
        delete[] enemigo;
    };

    bool EsColision(int enemigoX, int enemigoY) {
        return (x < enemigoX + 2 && x + 4 > enemigoX &&
            y < enemigoY + 3 && y + 4 > enemigoY);
    }

    int getX() { return this->x; }
    int getY() { return this->y; }
    int** getForma() { return this->enemigo; }
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }

    void setLlegoVeinte(bool llegoVeinte) { this->llegoVeinte = llegoVeinte; }

    void movimientoEnUno(int cnt, int borrar) {
        if (cnt % velocidad == 0) {
            dx = (y == 10 && x > 11) * -1 + (y == 19 && x < 152);
            dy = (x == 11 && y < 19) + (x == 152 && y > 10) * -1;
            grass(x, y, 4, 4, dx, dy);
            x += dx;
            y += dy;
            // DIBUJAR
            int spriteIndex = 0;
            if (y == 10 && x > 11) { // Izquierda
                spriteIndex = (x % 2 == 0) ? 1 : 2;
            }
            else if (x == 11 && y < 19) { // Abajo
                spriteIndex = (y % 2 == 0) ? 7 : 8;
            }
            else if (y == 19 && x < 152) { // Derecha
                spriteIndex = (x % 2 == 0) ? 3 : 4;
            }
            else if (x == 152 && y > 10) { // Arriba
                spriteIndex = (y % 2 == 0) ? 5 : 6;
            }

            for (int i = 0; i < 4; i++) {
                cursor(x, y + i);
                for (int j = 0; j < 4; j++) {
                    colores(MenemigoUno[spriteIndex][i][j]);  // Dibujar enemigo
                }
            }
        }
    }

    void borrar() {
        for (int i = 0; i < 4; i++) {
            cursor(x, y + i);
            for (int j = 0; j < 4; j++) {
                colores(4);  // Dibujar enemigo
            }
        }
    }

    void movimientoEnDos(int cnt, int borrar) {
        if (cnt % velocidad == 0) {
            // BORRAR

            // MOVER
            dx = (y == 20 && x > 11) * -1 + (y == 31 && x < 152);
            dy = (x == 11 && y < 31) + (x == 152 && y > 20) * -1;
            grass(x, y, 4, 4, dx, dy);
            x += dx;
            y += dy;

            // DIBUJAR
            int spriteIndex = 0;
            if (y == 20 && x > 11) { // Izquierda
                spriteIndex = (x % 2 == 0) ? 1 : 2;
            }
            else if (x == 11 && y < 31) { // Arriba
                spriteIndex = (y % 2 == 0) ? 7 : 8;
            }
            else if (y == 31 && x < 152) { // Derecha
                spriteIndex = (x % 2 == 0) ? 3 : 4;
            }
            else if (x == 152 && y > 20) { // Abajo
                spriteIndex = (y % 2 == 0) ? 5 : 6;
            }

            for (int i = 0; i < 4; i++) {
                cursor(x, y + i);
                for (int j = 0; j < 4; j++) {
                    colores(MenemigoDos[spriteIndex][i][j]);
                }
            }
        }

    }


};
