#ifndef CONTROLADOR_ROBOT_H
#define CONTROLADOR_ROBOT_H

#include "Hardware/IMotor.h"
#include "Sensores/IPercepcion.h"
#include "Estrategia/IEstrategiaCombate.h"
#include "Movimientos/IControlMovimiento.h"

class ControladorRobot {
public:
    ControladorRobot(IPercepcion& percepcion, IEstrategiaCombate& estrategia,
                     IControlMovimiento& controlMovimiento, IMotor& motor);
    void actualizar();
    const LecturasSensores& ultimasLecturas() const { return lecturas; }

private:
    IPercepcion& percepcion;
    IEstrategiaCombate& estrategia;
    IControlMovimiento& controlMovimiento;
    IMotor& motor;
    LecturasSensores lecturas{};
};

#endif
