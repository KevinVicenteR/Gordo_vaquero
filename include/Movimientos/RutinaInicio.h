#ifndef RUTINA_INICIO_H
#define RUTINA_INICIO_H

#include "Movimientos/MandoMotores.h"
#include "Movimientos/Confirmacion.h"
#include "Movimientos/BusquedaRival.h"
#include "Movimientos/ControlAtaque.h"
#include "Estrategia/DecisionMovimiento.h"
#include "Movimientos/Rondas/Ronda1.h"
#include "Movimientos/Rondas/Ronda2.h"
#include "Movimientos/Rondas/Ronda3.h"
#include "Movimientos/Rondas/Libre.h"

class RutinaInicio {
public:
    void iniciar(int rutinaElegida, int lado);
    void cancelar() { rutina = 0; }

    int actual() const { return rutina; }
    bool elegida() const { return conRutina; }

    bool continuar(const DecisionMovimiento& decision, MandoMotores& mando, IMotor& motor,
                   unsigned long ahora, BusquedaRival& busqueda, ControlAtaque& ataque);

private:
    Ronda1 ronda1;
    Ronda2 ronda2;
    Ronda3 ronda3;
    Libre libre;

    int rutina = 0;
    int lado = 1;
    bool conRutina = false;
    bool enCurso = false;
    unsigned long inicio = 0;
    Confirmacion rivalVisto;
};

#endif
