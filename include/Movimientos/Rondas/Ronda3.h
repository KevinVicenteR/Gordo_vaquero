
#ifndef RONDA3_H
#define RONDA3_H

#include "Movimientos/Rondas/PasoRonda.h"


constexpr int Ronda3VelocidadGiro = 150;          
constexpr int Ronda3VelocidadAvanceEspera = 100;  
constexpr unsigned long Ronda3TiempoMinimo = 300;
constexpr unsigned long Ronda3TiempoQuieto = 3000;    
constexpr unsigned long Ronda3TiempoMax = 6000;     

class Ronda3 {
public:
    ResultadoRonda paso(const PasoRonda& p);
};

#endif
