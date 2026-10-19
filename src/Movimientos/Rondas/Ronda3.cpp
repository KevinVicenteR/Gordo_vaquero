#include "Movimientos/Rondas/Ronda3.h"

ResultadoRonda Ronda3::paso(const PasoRonda& p) {
    if (p.deFrente) {
        return ResultadoRonda::Ataca;
    }
    if (p.t >= Ronda3TiempoMax) {
        return ResultadoRonda::Termina;
    }
    if (p.visto == 0) {
        const int vel = p.t < Ronda3TiempoQuieto ? 0 : Ronda3VelocidadAvanceEspera;
        p.mando.mover(p.motor, vel, vel, true);
        return ResultadoRonda::Sigue;
    }
    p.mando.mover(p.motor, p.visto * Ronda3VelocidadGiro, -p.visto * Ronda3VelocidadGiro, true);
    return ResultadoRonda::Sigue;
}
