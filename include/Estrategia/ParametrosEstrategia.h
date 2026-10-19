
#ifndef PARAMETROS_ESTRATEGIA_H
#define PARAMETROS_ESTRATEGIA_H

constexpr bool UsarPoliticaAprendida = false;
constexpr bool UsarRedLogica = true;
constexpr bool UsarRedControl = true;
constexpr bool MejorasEnModos1a3 = false;
constexpr bool UsarRedLogicaModo1 = MejorasEnModos1a3;
constexpr bool UsarRedLogicaModo3 = MejorasEnModos1a3;
constexpr bool UsarRedControlModo1 = MejorasEnModos1a3;
constexpr bool UsarRedControlModo3 = MejorasEnModos1a3;
constexpr bool EsquivarModo3 = false;
constexpr bool MejorarRecuperacionModo3 = false;
constexpr unsigned long RecuerdoRivalMs = 300;
constexpr unsigned long ContactoFrontalMs = 200;
constexpr unsigned long TiempoMinimoEsquivaRed = 120;
constexpr unsigned long TiempoRearmeEsquivaRed = 400;
constexpr int VelocidadEsquivaInterior = 60;
constexpr int VelocidadEsquivaExterior = 255;

#endif
