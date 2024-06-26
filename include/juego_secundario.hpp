#ifndef AYED_TPG_1C2024_JUEGO_SECUNDARIO_HPP
#define AYED_TPG_1C2024_JUEGO_SECUNDARIO_HPP
#include "iostream"
#include "vector"
#include "arista.hpp" 
#include "grafo.hpp"
#include "juego_principal.hpp"

class JuegoSecundario{
private:
    grafo& grafo_principal;


public:
    JuegoSecundario(grafo& grafo_principal) : grafo_principal(grafo_principal) {}


    /* Pre:
     * Post:
     */
    std::vector<arista> obtener_caminos_transitados();

    void imprimir_arista( arista& arista) ;
    void imprimir_aem( std::vector<arista>& arbol_expansion_maxima) ;

};


std::vector<arista> JuegoSecundario::obtener_caminos_transitados() {
    std::vector<arista> aem = grafo_principal.obtener_aem();
    imprimir_aem(aem);
    return aem;
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
  //  char nombre_local_salida = char (65+vertices.first);
    //char nombre_local_desitino = char(65+);
    std::cout << "Mejorar camino entre : Local " << vertices.first << " -> Local " << vertices.second << ", Cantidad de pedidos : " << peso << std::endl;
}


#endif //AYED_TPG_1C2024_JUEGO_SECUNDARIO_HPP
