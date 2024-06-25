#ifndef AYED_TPG_1C2024_JUEGO_PRINCIPAL_HPP
#define AYED_TPG_1C2024_JUEGO_PRINCIPAL_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <stack>
#include "pedido.hpp"
#include "a_estrella.hpp"
#include "heap.hpp"
#include "tablero.hpp"
#include "diccionario.hpp"

const int GENERAR_LOCAL = 1;
const int GENERAR_CLIENTES = 2;
const int GENERAR_CAMINO_MINIMO = 3;
const int GENERAR_PEDIDO = 4;
const int BUSCAR_LOCAL = 5;
const int IMPRIMIR_MAPA = 6;
const int SALIR = 7;
const std::vector<std::string> NOMBRES = {
        "ARCO DE LA DIOSA",
        "CÍRCULO DE LA NOCHE",
        "SENDERO DE LAS ESTRELLAS",
        "REINA DE LA TORMENTA",
        "LAMENTO DE LAS ALMAS",
        "NOCTURNA DE LA LANZA",
        "VIGILIA DEL ALMA",
        "CANTO DEL VIENTO",
        "CRUZ DE LA ESPADA",
        "MURMULLO DEL BOSQUE"
};

class JuegoPrincipal {
private:

    //Pre: -
    //Post: Devuelve true si el clave1 < clave2
    static bool comparar_diccionario (std::string clave1, std::string clave2);

    //Pre: -
    //Post: Devuelve true si el peso1 > peso2
    static bool comparar_heap (Pedido pedido1, Pedido pedido2);

    diccionario<std::string, Local, comparar_diccionario> locales;
    heap<Pedido, comparar_heap> pedidos;
    Tablero tablero;
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
    void generar_camino_minimo(Local local_origen, Local local_destino);

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

bool JuegoPrincipal::comparar_diccionario(std::string clave1, std::string clave2) {
    return clave1 < clave2;
}

bool JuegoPrincipal::comparar_heap(Pedido pedido1, Pedido pedido2) {
    return pedido1.obtener_prioridad() > pedido2.obtener_prioridad();
}

void JuegoPrincipal::imprimir_menu_juego_principal() {
    std::cout << GENERAR_LOCAL << ". Generar Local\n";
    std::cout << GENERAR_CLIENTES << ". Generar Clientes\n";
    std::cout << GENERAR_CAMINO_MINIMO << ". Generar Camino Minimo\n";
    std::cout << GENERAR_PEDIDO << ". Generar Pedido\n";
    std::cout << BUSCAR_LOCAL << ". Buscar Local\n";
    std::cout << IMPRIMIR_MAPA << ". Imprimir Mapa\n";
    std::cout << SALIR << ". Salir\n";
}

void JuegoPrincipal::generar_local() {
    std::vector<int> prioridades(NOMBRES.size());
    for (size_t i = 0; i < NOMBRES.size(); ++i) {
        prioridades[i] = rand() % 100 + 1;
    }

    size_t indice = (size_t) rand() % NOMBRES.size();
    std::string nombre_local = NOMBRES[indice];
    int prioridad = prioridades[indice];

    size_t x, y;
    do {
        x = (size_t) rand() % FILAS_CALLEJON;
        y = (size_t) rand() % COLUMNAS_CALLEJON;
    } while (tablero.tipo_elemento(x,y) != Casillero::DISPONIBLE);

    Local nuevo_local (nombre_local,prioridad, x, y);
    tablero.marcar_casillero(x, y, Casillero::LOCAL);
    locales.alta(nombre_local, nuevo_local);

    std::vector<Local> locales_en_orden = locales.inorder();
    std::cout << "Locales actuales:\n";
    for (const auto& local : locales_en_orden) {
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

void JuegoPrincipal::generar_camino_minimo(Local local_origen, Local local_destino) {
    coordenada coordenada_local1 = local_origen.obtener_coordenada();
    coordenada coordenada_local2 = local_destino.obtener_coordenada();
    mapa mapa_callejon (tablero);

    std::stack<coordenada> camino_minimo = algoritmo.obtener_camino_minimo(coordenada_local1, coordenada_local2,
                                                               mapa_callejon, algoritmo.heuristica_manhattan);
    if (camino_minimo.empty()) {
        std::cout << "No existe camino desde" << local_origen.obtener_nombre() << "hasta" << local_destino.obtener_nombre() << "\n";
    } else {
        cambiar_tipo_coordenadas(camino_minimo, Casillero::CAMINO);
        tablero.imprimir_tablero();
        cambiar_tipo_coordenadas(camino_minimo, Casillero::DISPONIBLE);
    }
}

void JuegoPrincipal::generar_pedido() {
    if (locales.vacio()) {
        std::cout << "No hay locales disponibles para generar un pedido.\n";

    } else {
        std::cout << "Locales disponibles:\n";
        std::vector<Local> locales_en_orden = locales.inorder();
        for (size_t i = 0; i < locales.tamanio(); i++) {
            std::cout << i + 1 << ". " << locales_en_orden[i].obtener_nombre() << "\n";
        }

        size_t indice_destino;
        size_t indice_origen;
        int peso;
        std::cout << "Seleccione el índice del local de origen: "; std::cin >> indice_origen; indice_origen--;
        std::cout << "Seleccione el índice del local de destino: "; std::cin >> indice_destino; indice_destino--;
        std::cout << "Ingrese el peso del paquete: "; std::cin >> peso;

        if (indice_origen >= 0 && indice_origen < locales.tamanio() &&
            indice_destino >= 0 && indice_destino < locales.tamanio()) {
            Pedido pedido(&locales_en_orden[indice_origen], &locales_en_orden[indice_destino], peso);
            pedidos.alta(pedido);
            std::cout << "Se generó un pedido desde " << locales_en_orden[indice_origen].obtener_nombre()
                      << " a " << locales_en_orden[indice_destino].obtener_nombre() << " con peso " << peso << "\n";
        } else {
            std::cout << "Índices de locales no válidos.\n";
        }
    }
}

void JuegoPrincipal::imprimir_mapa() {
    tablero.imprimir_tablero();
}

void JuegoPrincipal::jugar() {
    bool jugando = true;
    std::string nombre_local;
    while (jugando) {
        imprimir_menu_juego_principal();
        int opcion;
        std::cin >> opcion;
        switch (opcion) {
            case GENERAR_LOCAL:
                generar_local();
                break;
            case GENERAR_CLIENTES:
                generar_clientes();
                break;
            case GENERAR_CAMINO_MINIMO: {
                if (locales.tamanio() < 2) {
                    std::cout << "Se requieren al menos dos locales para generar un camino mínimo.\n";

                } else {
                    Pedido pedido_prioritario = pedidos.baja();
                    generar_camino_minimo(pedido_prioritario.obtener_origen(), pedido_prioritario.obtener_destino());
                }
                break;
            }
            case GENERAR_PEDIDO:
                generar_pedido();
                break;
            case BUSCAR_LOCAL:
                std::cout << "Ingrese el nombre del local: " ; getline(std::cin, nombre_local);

                for (char& c : nombre_local) {
                    c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
                }

                if (locales.esta_en_diccionario(nombre_local)) {
                    std::cout << "Prioridad: " << locales[nombre_local].obtener_prioridad();
                    std::cout << "Coordenada: (" << locales[nombre_local].obtener_coordenada().x() << ";" << locales[nombre_local].obtener_coordenada().y() << ")";
                } else {
                    std::cout << "No se encuentra dicho local";
                }
                break;
            case IMPRIMIR_MAPA:
                imprimir_mapa();
                break;
            case SALIR:
                jugando = false;
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
                break;
        }
    }
}

#endif //AYED_TPG_1C2024_JUEGO_PRINCIPAL_HPP