
#ifndef RONDA1_H
#define RONDA1_H

#include "Movimientos/Rondas/PasoRonda.h"
#include "Movimientos/Confirmacion.h"


constexpr int Ronda1VelocidadGiro = 180;         
constexpr int Ronda1VelocidadEsquiva = 160;      
constexpr unsigned long Ronda1TiempoEsquiva = 0;
constexpr unsigned long Ronda1TiempoMinimoGiro = 80;   
constexpr unsigned long Ronda1TiempoMaxGiro = 500;     

class Ronda1 {
public:
    ResultadoRonda paso(const PasoRonda& p);

private:
    Confirmacion rivalVisto;
    bool frenando = false;
    unsigned long inicioFreno = 0;
    Freno freno;
};

#endif
