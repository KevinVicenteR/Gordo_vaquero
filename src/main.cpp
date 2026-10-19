#include <Arduino.h>
#include "Hardware/DriverMotores.h"
#include "Hardware/PlacaXMotion.h"
#include "Sensores/Percepcion.h"
#if !defined(MODO_PRUEBA_MOTORES) && !defined(MODO_DIAGNOSTICO)
#include "Estrategia/EstrategiaReglas.h"
#include "Movimientos/ControlMovimiento.h"
#include "robot/ControladorRobot.h"
#include "Estrategia/EstrategiaCompetencia.h"
#include "Parametros.h"

using EstrategiaElegida = EstrategiaReglas;

#endif

PlacaXMotion placa;
DriverMotores motores;
#if !defined(MODO_PRUEBA_MOTORES)
Percepcion percepcion;
#endif
#if !defined(MODO_PRUEBA_MOTORES) && !defined(MODO_DIAGNOSTICO)
EstrategiaElegida estrategiaClasica;
ControlMovimiento controlMovimiento;
EstrategiaCompetencia estrategia(estrategiaClasica, controlMovimiento);
ControladorRobot robot(percepcion, estrategia, controlMovimiento, motores);
#endif

#if defined(MODO_PRUEBA_MOTORES)
#include "Modos/ModoPruebaMotores.h"
ModoPruebaMotores modo(placa, motores);
#elif defined(MODO_DIAGNOSTICO)
#include "Modos/ModoDiagnostico.h"
ModoDiagnostico modo(placa, motores, percepcion);
#else
#include "Modos/ModoCombate.h"
ModoCombate modo(placa, motores, percepcion, controlMovimiento, robot);
#endif

void setup() {
    modo.iniciar();
}

void loop() {
    modo.actualizar();
}
