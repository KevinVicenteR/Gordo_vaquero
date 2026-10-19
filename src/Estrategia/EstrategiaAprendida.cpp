#include "Estrategia/EstrategiaAprendida.h"
#include "Estrategia/PoliticaAprendida.h"

DecisionMovimiento EstrategiaAprendida::elegirContraEnemigo(const LecturasSensores& lecturas) {
    const int estado = politica::codificarEstado(lecturas, ladoUltimo);
    if (lecturas.c45Izq || lecturas.latIzq) {
        ladoUltimo = 0;
    } else if (lecturas.c45Der || lecturas.latDer) {
        ladoUltimo = 1;
    }
    return {politica::Acciones[politica::elegirAccion(estado)], lecturas.frontal};
}
