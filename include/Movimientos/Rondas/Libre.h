
#ifndef LIBRE_H
#define LIBRE_H

#include "Movimientos/Rondas/PasoRonda.h"

constexpr int LibreVelocidadArco = 255;           
constexpr int LibreVelocidadArcoInterior = 110;  
constexpr int LibreVelocidadGiro = 150;           

constexpr unsigned long LibreTiempoMinimo = 0;
constexpr unsigned long LibreTiempoArco = 200;   
constexpr unsigned long LibreTiempoMax = 1500;    

class Libre {
public:
    ResultadoRonda paso(const PasoRonda& p);
};

#endif
