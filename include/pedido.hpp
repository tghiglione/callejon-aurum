#ifndef AYED_TPG_1C2024_PEDIDO_HPP
#define AYED_TPG_1C2024_PEDIDO_HPP

#include "Local.hpp"

class JuegoPrincipal;

class Pedido {
private:
    Local* origen;
    Local* destino;
    int peso;
    int prioridad_pedido;

public:
    Pedido(Local* origen, Local* destino, int peso) {
        this->origen = origen;
        this->destino = destino;
        this->peso = peso;
        prioridad_pedido = origen->obtener_prioridad() * peso;
    }

    bool operator<(const Pedido& pedido1) const {
        return prioridad_pedido < pedido1.prioridad_pedido;
    }

    friend class JuegoPrincipal;
};

#endif
