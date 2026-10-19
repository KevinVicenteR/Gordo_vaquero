
#ifndef SENSOR_ENEMIGO_H
#define SENSOR_ENEMIGO_H

#include <stdint.h>
#include "Sensores/RetencionDeteccion.h"

class SensorEnemigo {
public:
    SensorEnemigo(uint8_t pin, bool activoAlto);


    bool detecta(unsigned long ahora);


    void fijarPolaridad(bool activoAltoNuevo) { activoAlto = activoAltoNuevo; }
    void aprenderPolaridad();
    void reiniciarFiltro();

private:
    bool mayoriaAlta() const;

    uint8_t pin;
    bool activoAlto;
    RetencionDeteccion filtro;
};

#endif
