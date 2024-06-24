#ifndef AYED_TPG_1C2024_JUEGO_SECUNDARIO_HPP
#define AYED_TPG_1C2024_JUEGO_SECUNDARIO_HPP
#include "iostream"
#include "vector"
#include "aem/arista.hpp" 
#include "aem/grafo.hpp"

class JuegoSecundario{
private:
    grafo grafo_principal; 

public:

    /* Pre:
     * Post:
     */
    std::vector<arista> obtener_caminos_transitados();

    void imprimir_arista( arista& arista) ;
    void imprimir_aem( std::vector<arista>& arbol_expansion_maxima) ;
    /* Pre:
     * Post:
     */
    void imprimir_menu_juego_secundario();

};


std::vector<arista> JuegoSecundario::obtener_caminos_transitados() {
    std::vector<arista> aem = grafo_principal.obtener_aem();
    imprimir_aem(aem);
    return aem;
}

void JuegoSecundario::imprimir_menu_juego_secundario() {
    std::cout << "----- Menú Juego Secundario -----" << std::endl;
    std::cout << "1. Obtener camino máximo" << std::endl;
    std::cout << "2. Otra opción" << std::endl;
    std::cout << "3. Salir" << std::endl;
    std::cout << "Ingrese una opción: ";
}

void JuegoSecundario::imprimir_aem( std::vector<arista>& arbol_expansion_maxima)  {
    std::cout << "Senderos a priorizar, por cantidad de pedidos:" << std::endl;
    for ( arista& arista : arbol_expansion_maxima) {
        imprimir_arista(arista);
    }
}

void JuegoSecundario::imprimir_arista( arista& arista) {
    std::pair<size_t, size_t> vertices = arista.obtener_vertices();
    int peso = arista.obtener_peso();
    char nombre_local_salida = char (65+vertices.first);
    char nombre_local_desitino = char(65+vertices.second);
    std::cout << "Mejorar camino entre : Local " << nombre_local_salida << " -> Local " << nombre_local_desitino << ", Cantidad de pedidos : " << peso << std::endl;
}


#endif //AYED_TPG_1C2024_JUEGO_SECUNDARIO_HPP
