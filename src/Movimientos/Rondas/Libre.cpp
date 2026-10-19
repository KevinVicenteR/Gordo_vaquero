#include "Movimientos/Rondas/Libre.h"

ResultadoRonda Libre::paso(const PasoRonda& p) {
    if (p.deFrente) {
        return ResultadoRonda::Ataca;
    }
    if (p.t >= LibreTiempoMax) {
        return ResultadoRonda::Termina;
    }
    if (p.t < LibreTiempoArco) {
        p.mando.mover(p.motor, p.lado > 0 ? LibreVelocidadArco : LibreVelocidadArcoInterior,
                      p.lado > 0 ? LibreVelocidadArcoInterior : LibreVelocidadArco, true);
        return ResultadoRonda::Sigue;
    }
    const int sentido = p.visto != 0 ? p.visto : -p.lado;
    p.mando.mover(p.motor, sentido * LibreVelocidadGiro, -sentido * LibreVelocidadGiro, true);
    return ResultadoRonda::Sigue;
}
