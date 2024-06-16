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

enum class Casillero {OCUPADO, DISPONIBLE, LOCAL, CLIENTE};

class Tablero {

private:
    matriz<Casillero> tablero;

public:
    Tablero() : tablero() {
        tablero.redimensionar(FILAS_CALLEJON, COLUMNAS_CALLEJON);

        for (size_t i = 0; i < FILAS_CALLEJON; i++) {
            for (size_t j = 0; j < COLUMNAS_CALLEJON; j++) {
                tablero.elemento(i, j) = (valores_callejon[i][j] == 0) ? Casillero::OCUPADO : Casillero::DISPONIBLE;
            }
        }
    }

    void imprimir_tablero() {
        for (size_t i = 0; i < FILAS_CALLEJON; i++) {
            for (size_t j = 0; j < COLUMNAS_CALLEJON; j++) {
                if (int(tablero.elemento(i, j)) == 1){
                    std::cout << "\033[42m  " << " "; // Bloque verde (disponible)
                } else {
                    std::cout << "\033[47m  " << " "; // Bloque gris (ocupado)
                }
            }
            std::cout << "\033[0m\n"; // Restaura el color al final de cada fila
        }
    }

};
#endif //AYED_TPG_1C2024_TABLERO_HPP
