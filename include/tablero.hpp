#ifndef AYED_TPG_1C2024_TABLERO_HPP
#define AYED_TPG_1C2024_TABLERO_HPP

#include "matriz.hpp"
#include <iostream>

const size_t COLUMNAS_CALLEJON = 24;
const size_t FILAS_CALLEJON = 18;
const int valores_callejon[FILAS_CALLEJON][COLUMNAS_CALLEJON] =
        {
        {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0},
        {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0},
        {1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0},
        {1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0},
        {1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0},
        {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        };
const size_t CANTIDAD_MAXIMA_CLIENTES = 4;
enum class Casillero {OCUPADO, DISPONIBLE, LOCAL, CLIENTE, CAMINO, LOCAL_ORIGEN, LOCAL_DESTINO};
const std::string COLOR_OCUPADO = "\033[47m   "; //gris
const std::string COLOR_DISPONIBLE = "\033[42m   "; //verde
const std::string COLOR_LOCAL = "\033[46m   "; //cian
const std::string COLOR_CLIENTE = "\033[33m\033[41m   "; //naranja
const std::string COLOR_CAMINO = "\033[41m   "; //rojo
const std::string COLOR_LOCAL_ORIGEN = "\033[44m   "; //azul
const std::string COLOR_LOCAL_DESTINO = "\033[45m   "; //magenta
const std::string FIN_FILA = "\033[0m\n"; //negro


class Tablero {

private:
    matriz<Casillero> tablero;

public:

    //Constructor
    Tablero() : tablero() {
        tablero.redimensionar(FILAS_CALLEJON, COLUMNAS_CALLEJON);

        for (size_t i = 0; i < FILAS_CALLEJON; i++) {
            for (size_t j = 0; j < COLUMNAS_CALLEJON; j++) {
                tablero.elemento(i, j) = (valores_callejon[i][j] == 0) ? Casillero::OCUPADO : Casillero::DISPONIBLE;
            }
        }
    }

    //Pre: (x,y) debe ser una coordenada válida. Caso contrario no hace nada
    //Post: Cambia el tipo del casillero de la coordenada (x,y) con el que se pasa por parámtero
    void marcar_casillero(size_t x, size_t y, Casillero tipo) {
        if (x >= 0 && x < FILAS_CALLEJON && y >= 0 && y < COLUMNAS_CALLEJON) {
            tablero.elemento(x, y) = tipo;
        }
    }

    //Pre: -
    //Post: Muestra por pantalla el tablero
    void imprimir_tablero() {
        for (size_t i = 0; i < FILAS_CALLEJON; i++) {
            for (size_t j = 0; j < COLUMNAS_CALLEJON; j++) {
                if (tablero.elemento(i, j) == Casillero::DISPONIBLE) {
                    std::cout << COLOR_DISPONIBLE;
                } else {
                    std::cout << COLOR_OCUPADO;
                }
            }
            std::cout << FIN_FILA; // Restaura el color al final de cada fila
        }
    }

    //Pre: -
    //Post: Devuelve el tipo de casillero que se encuentra en la coordenada (x,y)
    Casillero tipo_elemento(size_t x, size_t y) {
        return tablero.elemento(x,y);
    }

    //Pre: -
    //Post: Devuelve la matriz de casilleros de Tablero
    matriz<Casillero> obtener_matriz_tablero() {
        return tablero;
    }
};

#endif //AYED_TPG_1C2024_TABLERO_HPP