#ifndef AYED_TPG_1C2024_LOCAL_H
#define AYED_TPG_1C2024_LOCAL_H

#include <string>

class Local{
private:
    std::string nombre;
    int prioridad;
    int x, y;

public:
    Local(char nombre, int prioridad, int x, int y) {
        this->nombre = nombre;
        this->prioridad = prioridad;
        this->x = x;
        this->y = y;
    }

    int obtener_prioridad() {
        return prioridad;
    }
};

#endif //AYED_TPG_1C2024_LOCAL_H
