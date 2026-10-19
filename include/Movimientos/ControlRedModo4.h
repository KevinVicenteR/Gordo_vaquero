#ifndef CONTROL_RED_MODO4_H
#define CONTROL_RED_MODO4_H
#include "Movimientos/ControlPID.h"
#include "Movimientos/MandoMotores.h"
#include "Estrategia/DecisionMovimiento.h"
class ControlRedModo4 {
public:
    void reiniciar() { activo = false; pid.reiniciar(); }
    __attribute__((noinline)) void ejecutar(const DecisionMovimiento&, MandoMotores&, IMotor&, unsigned long,
                  int velocidad, bool empujando, int limiteBorde, int modo = 4);
private:
    ControlPID pid;
    bool activo = false;
    unsigned long inicio, ultimo;
    int errorAnterior;
};
#endif
