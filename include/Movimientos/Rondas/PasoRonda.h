
#ifndef PASO_RONDA_H
#define PASO_RONDA_H

#include "Movimientos/MandoMotores.h"
#include "Movimientos/BusquedaRival.h"
#include "Movimientos/ControlAtaque.h"
#include "Estrategia/DecisionMovimiento.h"


struct PasoRonda {
    const DecisionMovimiento& decision;
    MandoMotores& mando;
    IMotor& motor;
    BusquedaRival& busqueda;
    ControlAtaque& ataque;
    unsigned long ahora;
    unsigned long t;     
    int lado;           
    int visto;          
    bool deFrente;       
};


enum class ResultadoRonda : unsigned char {
    Sigue,     
    Ataca,      
    Termina     
};

#endif
