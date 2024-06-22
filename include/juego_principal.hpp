#ifndef AYED_TPG_1C2024_JUEGO_PRINCIPAL_HPP
#define AYED_TPG_1C2024_JUEGO_PRINCIPAL_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include "stack"
#include "pedido.hpp"
#include "a_estrella.hpp"


class JuegoPrincipal {
private:
    Tablero tablero;
    std::vector<Local> locales;
    std::vector<Pedido> pedidos;
    a_estrella algoritmo;

    //Pre: Recibe una pila de coordenadas
    //Post: Modifica el tipo de los casilleros, correspondientes a las coordenadas en pila_coordenadas, en tablero
    void cambiar_tipo_coordenadas(std::stack<coordenada> pila_coordenadas, Casillero tipo);

public:

    //Pre: -
    //Post: Imprime el menu correspondiente a esta clase
    void imprimir_menu_juego_principal();

    //Pre: -
    //Post: Se genera un local random, se añade a locales y tablero
    void generar_local();

    //Pre: -
    //Post: Se genera una coordenada random para los clientes y se añade a tablero
    void generar_clientes();

    //Pre: -
    //Post: Se imprime una copia del tablero original que muestra el camino minimo entre origen y destino
    void generar_camino_minimo(Local &origen, Local &destino);

    //Pre: -
    //Post: Genera un pedido personalizado, lo muestra por pantalla y lo añade a pedidos
    void generar_pedido();

    //Pre: -
    //Post: Muestra por pantalla el tablero con clientes y locales
    void imprimir_mapa();

    //Pre: -
    //Post: contempla la logica de JuegoPrincipal
    void jugar();
};

void JuegoPrincipal::imprimir_menu_juego_principal() {
    std::cout << "1. Generar Local\n";
    std::cout << "2. Generar Clientes\n";
    std::cout << "3. Generar Camino Minimo\n";
    std::cout << "4. Generar Pedido\n";
    std::cout << "5. Imprimir Mapa\n";
    std::cout << "6. Salir\n";
}

void JuegoPrincipal::generar_local() {
    std::vector<std::string> nombres = {
            "Arco de la Diosa",
            "Círculo de la Noche",
            "Sendero de las Estrellas",
            "Reina de la Tormenta",
            "Lamento de las Almas",
            "Nocturna de la Lanza",
            "Vigilia del Alma",
            "Canto del Viento",
            "Cruz de la Espada",
            "Murmullo del Bosque"
    };

    std::vector<int> prioridades(nombres.size());
    for (size_t i = 0; i < nombres.size(); ++i) {
        prioridades[i] = rand() % 100 + 1;
    }

    size_t indice = (size_t) rand() % nombres.size();
    std::string nombre_local = nombres[indice];
    int prioridad = prioridades[indice];

    size_t x, y;
    do {
        x = (size_t) rand() % FILAS_CALLEJON;
        y = (size_t) rand() % COLUMNAS_CALLEJON;
    } while (tablero.tipo_elemento(x,y) != Casillero::DISPONIBLE);

    Local nuevo_local (nombre_local,prioridad, x, y);
    tablero.marcar_casillero(x, y, Casillero::LOCAL);

    locales.push_back(nuevo_local);

    std::sort(locales.begin(), locales.end(), [](const Local& a, const Local& b) {
        return a.obtener_nombre() < b.obtener_nombre();
    });

    std::cout << "Locales actuales:\n";
    for (const auto& local : locales) {
        std::cout << local.obtener_nombre() << " - Prioridad: " << local.obtener_prioridad() << "\n";
    }
}

void JuegoPrincipal::generar_clientes() {

    size_t cantidad_clientes = (size_t) rand() % CANTIDAD_MAXIMA_CLIENTES, x, y;

    for (int i = 0; i < cantidad_clientes; i++) {
        do {
            x = (size_t) rand() % FILAS_CALLEJON;
            y = (size_t) rand() % COLUMNAS_CALLEJON;
        } while (tablero.tipo_elemento(x,y) != Casillero::DISPONIBLE);
        tablero.marcar_casillero(x,y,Casillero::CLIENTE);
    }
}

void JuegoPrincipal::cambiar_tipo_coordenadas(std::stack<coordenada> pila_coordenadas, Casillero tipo) {

    while (!pila_coordenadas.empty()) {
        tablero.marcar_casillero((size_t)pila_coordenadas.top().x(), (size_t)pila_coordenadas.top().y(), tipo);
        pila_coordenadas.pop();
    }
}

void JuegoPrincipal::generar_camino_minimo(Local& local1, Local& local2) {

    coordenada coordenada_local1 = local1.obtener_coordenada();
    coordenada coordenada_local2 = local2.obtener_coordenada();
    mapa mapa_callejon (tablero);

    std::stack<coordenada> camino_minimo = algoritmo.obtener_camino_minimo(coordenada_local1, coordenada_local2,
                                                               mapa_callejon, algoritmo.heuristica_manhattan);

    if (camino_minimo.empty()) {
        std::cout << "No existe camino desde" << local1.obtener_nombre() << "hasta" << local2.obtener_nombre() << "\n";

    } else {

        cambiar_tipo_coordenadas(camino_minimo, Casillero::CAMINO);
        tablero.imprimir_tablero();
        cambiar_tipo_coordenadas(camino_minimo, Casillero::DISPONIBLE);
    }
}

void JuegoPrincipal::generar_pedido() {
    if (locales.empty()) {
        std::cout << "No hay locales disponibles para generar un pedido.\n";
        return;
    }

    std::cout << "Locales disponibles:\n";
    for (size_t i = 0; i < locales.size(); ++i) {
        std::cout << i << ". " << locales[i].obtener_nombre() << "\n";
    }

    size_t indice_origen, indice_destino;
    int peso;
    std::cout << "Seleccione el índice del local de origen: ";
    std::cin >> indice_origen;
    std::cout << "Seleccione el índice del local de destino: ";
    std::cin >> indice_destino;
    std::cout << "Ingrese el peso del paquete: ";
    std::cin >> peso;

    if (indice_origen >= 0 && indice_origen < locales.size() &&
        indice_destino >= 0 && indice_destino < locales.size()) {
        Pedido pedido(&locales[indice_origen], &locales[indice_destino], peso);
        pedidos.push_back(pedido);
        std::cout << "Se generó un pedido desde " << locales[indice_origen].obtener_nombre()
                  << " a " << locales[indice_destino].obtener_nombre() << " con peso " << peso << "\n";
    } else {
        std::cout << "Índices de locales no válidos.\n";
    }
}

void JuegoPrincipal::imprimir_mapa() {
    tablero.imprimir_tablero();
}

void JuegoPrincipal::jugar() {
    bool jugando = true;
    while (jugando) {
        imprimir_menu_juego_principal();
        int opcion;
        std::cin >> opcion;
        switch (opcion) {
            case 1:
                generar_local();
                break;
            case 2:
                generar_clientes();
                break;
            case 3: {
                if (locales.size() < 2) {
                    std::cout << "Se requieren al menos dos locales para generar un camino mínimo.\n";
                    break;
                }
                Local& local1 = locales[0];
                Local& local2 = locales[1];
                generar_camino_minimo(local1, local2);
                break;
            }
            case 4:
                generar_pedido();
                break;
            case 5:
                imprimir_mapa();
                break;
            case 6:
                jugando = false;
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
                break;
        }
    }
}

#endif //AYED_TPG_1C2024_JUEGO_PRINCIPAL_HPP