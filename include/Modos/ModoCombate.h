#ifndef MODO_COMBATE_H
#define MODO_COMBATE_H

#include <stdint.h>
#include "Hardware/PlacaXMotion.h"
#include "Hardware/DriverMotores.h"
#include "Hardware/ModuloArranque.h"
#include "Hardware/CajaNegra.h"
#include "Sensores/Percepcion.h"
#include "Movimientos/ControlMovimiento.h"
#include "robot/ControladorRobot.h"

class ModoCombate {
public:
    ModoCombate(PlacaXMotion& placa, DriverMotores& motores, Percepcion& percepcion,
                ControlMovimiento& controlMovimiento, ControladorRobot& robot);
    void iniciar();
    void actualizar();

private:
    void empezarCombate();
    void reiniciarPlaca();
    void avisoListo(bool encendido);
    void actualizarAvisoListo();
    void enviarTelemetria();

    PlacaXMotion& placa;
    DriverMotores& motores;
    Percepcion& percepcion;
    ControlMovimiento& controlMovimiento;
    ControladorRobot& robot;
    ModuloArranque moduloArranque;
    CajaNegra cajaNegra;
    bool enCombate = false;
    bool combateEmpezado = false;
    bool reiniciadaPorParada = false;
    unsigned long inicioCombate = 0;
    unsigned long ultimaTraza = 0;
};

#endif
