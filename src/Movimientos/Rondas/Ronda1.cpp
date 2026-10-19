#include "Movimientos/Rondas/Ronda1.h"

ResultadoRonda Ronda1::paso(const PasoRonda& p) {
    if (frenando) {
        if (p.ahora - inicioFreno < freno.duracion) {
            p.mando.mover(p.motor, freno.izq, freno.der, true, true);
            return ResultadoRonda::Sigue;
        }
        return ResultadoRonda::Termina;
    }
    if (p.t < Ronda1TiempoEsquiva) {
        p.mando.mover(p.motor, Ronda1VelocidadEsquiva, Ronda1VelocidadEsquiva, true);
        return ResultadoRonda::Sigue;
    }
    const unsigned long t = p.t - Ronda1TiempoEsquiva;
    const bool confirmado = rivalVisto.actualizar(veDeFrente(p.decision), p.ahora);
    if (confirmado && t >= Ronda1TiempoMinimoGiro) {
        p.ataque.iniciarEmbestida(p.ahora);
        if (p.mando.calcularFreno(TiempoFrenadoRuedas, freno)) {
            frenando = true;
            inicioFreno = p.ahora;
            p.mando.mover(p.motor, freno.izq, freno.der, true, true);
            return ResultadoRonda::Sigue;
        }
        return ResultadoRonda::Termina;
    }
    if (t >= Ronda1TiempoMaxGiro) {
        return ResultadoRonda::Termina;
    }
    p.mando.mover(p.motor, p.lado * Ronda1VelocidadGiro, -p.lado * Ronda1VelocidadGiro, true);
    return ResultadoRonda::Sigue;
}
