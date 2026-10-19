#ifndef ICONTROL_MOVIMIENTO_H
#define ICONTROL_MOVIMIENTO_H

#include "Hardware/IMotor.h"
#include "Estrategia/DecisionMovimiento.h"

class IControlMovimiento {
public:
    virtual ~IControlMovimiento() {}
    virtual void ejecutar(const DecisionMovimiento& decision, IMotor& motor, unsigned long ahora) = 0;
};

#endif
