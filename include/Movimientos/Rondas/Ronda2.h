
#ifndef RONDA2_H
#define RONDA2_H

#include "Movimientos/Rondas/PasoRonda.h"
#include "Movimientos/Confirmacion.h"


constexpr bool Ronda2Pivote = true;
constexpr int Ronda2VelocidadPivote = 180;      
constexpr int Ronda2VelocidadGiro = 150;
constexpr int Ronda2VelocidadEsquiva = 160;       
constexpr unsigned long Ronda2TiempoEsquiva = 0;      
constexpr unsigned long Ronda2TiempoMinimoGiro = 60;   
constexpr unsigned long Ronda2TiempoMaxGiro = 500;    

class Ronda2 {
public:
    ResultadoRonda paso(const PasoRonda& p);

private:
    void decidirLado(const PasoRonda& p);
    Confirmacion rivalVisto;
    bool iniciada = false;
    int lado = 1;
    bool ladoDecidido = false;
    bool frenando = false;
    unsigned long inicioFreno = 0;
    Freno freno;
};

#endif
