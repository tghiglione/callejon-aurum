#ifndef AYED_TPG_1C2024_CASILLERO_HPP
#define AYED_TPG_1C2024_CASILLERO_HPP


enum Estado {CAMINABLE, NO_CAMINABLE, CLIENTE};

class Casillero {

private:
    Estado estado;
    int x, y;

public:

    // Constructor
    Casillero(int x, int y, Estado estado)
    {
        this-> x = x;
        this-> y = y;
        this-> estado = estado;
    }

};
#endif //AYED_TPG_1C2024_CASILLERO_HPP
