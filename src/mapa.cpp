#include "mapa.hpp"
#include "matriz.hpp"
bool mapa::es_vecino_valido(coordenada posicion) {
    int tam_filas=int(map.filas());
    int tam_col=int(map.columnas());

    if (posicion.x() < 0 || posicion.x() >= tam_filas || posicion.y() < 0 || posicion.y() >=tam_col) {
        return false;
    }

    return map.elemento(posicion.x(),posicion.y()) == nullptr;
}