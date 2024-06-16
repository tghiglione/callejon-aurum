#ifndef AYED_TPG_1C2024_JUEGO_PRINCIPAL_HPP
#define AYED_TPG_1C2024_JUEGO_PRINCIPAL_HPP

#include "iostream"
#include "vector"
#include "tablero.hpp"
#include "mapa.hpp"
#include "casillero.hpp"
#include "pedido.hpp"


class JuegoPrincipal {

private:

/* Locales
 * clientes
 * mapa
 * algoritmo a*
 *
 */

    /* Pre: -
     * Post: imprime mapa del juego
     */
    void imprimir_mapa();


    /* Pre: -
     * Post:
     */
    void imprimir_menu_juego_principal();


    /* Pre: -
     * Post:
     */
    void generar_locales();


    /* Pre: -
     * Post:
     */
    void generar_clientes();


    /* Pre: -
     * Post: se imprime el mapa con el camino de un color diferente.
     *       El algoritmo que se usa es A*, con la heurística Distancia Manhattan.
     */
    void generar_camino_minimo(Local local1, Local local2);


    /* Pre: -
     * Post:
     */
    Pedido generar_pedido(Local* local_origen, Local* local_destino, int peso_paquete);


public:

    /* Pre: -
     * Post:
     */
    void jugar();

};



void JuegoPrincipal::imprimir_mapa() {

}

void JuegoPrincipal::imprimir_menu_juego_principal() {

    std::cout << " \n";
    std::cout << " \n";
    std::cout << " \n";
    std::cout << " \n";
    std::cout << " \n";
}

void JuegoPrincipal::generar_clientes() {

}

void JuegoPrincipal::generar_locales() {

}

void JuegoPrincipal::generar_camino_minimo (Local local1, Local local2) {

}

Pedido JuegoPrincipal::generar_pedido(Local* local_origen, Local* local_destino, int peso_paquete) {
    Pedido _pedido(local_origen, local_destino, peso_paquete);
    return _pedido;
}

void JuegoPrincipal::jugar(){

}

#endif //AYED_TPG_1C2024_JUEGO_PRINCIPAL_HPP
