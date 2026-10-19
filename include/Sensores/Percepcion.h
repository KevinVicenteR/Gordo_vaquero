#ifndef PERCEPCION_H
#define PERCEPCION_H

#include "Pines.h"
#include "Parametros.h"
#include "Sensores/IPercepcion.h"
#include "Sensores/SensorPiso.h"
#include "Sensores/SensorEnemigo.h"

class Percepcion: public IPercepcion {
public:
    LecturasSensores leer() override;
    void calibrarPiso();
    void calibrarSensoresEnemigo();

    int negroIzquierdo() const { return pisoIzq.negroCalibrado(); }
    int negroDerecho() const { return pisoDer.negroCalibrado(); }

private:
    SensorPiso pisoIzq{S_PISO_IZQ, NegroInicialPiso};
    SensorPiso pisoDer{S_PISO_DER, NegroInicialPiso};
    SensorEnemigo latIzq{S_LAT_IZQ, PolaridadSensoresEnemigo >= 0};
    SensorEnemigo c45Izq{S_FRONT_IZQ, PolaridadSensoresEnemigo >= 0};
    SensorEnemigo frontal{S_FRONT_CEN, PolaridadSensoresEnemigo >= 0};
    SensorEnemigo c45Der{S_FRONT_DER, PolaridadSensoresEnemigo >= 0};
    SensorEnemigo latDer{S_LAT_DER, PolaridadSensoresEnemigo >= 0};
};

#endif
