
#ifndef PARAMETROS_ARRANQUE_H
#define PARAMETROS_ARRANQUE_H


constexpr unsigned long TiempoInicioReglamentario = 5000;
constexpr unsigned long EsperaInicioCombate = 5000;
constexpr bool DipActivoBajo = true;
constexpr bool ColocacionLibre = false;
constexpr bool ModuloArranqueActivoAlto = true;
constexpr unsigned long FiltroModuloArranqueMs = 30;
constexpr unsigned long FiltroParadaModuloMs = 150;
constexpr unsigned long StopMinimoAntesDeStart = 300;
constexpr unsigned long TiempoReanudarCombate = 0;
constexpr bool ReiniciarTrasParada = true;
constexpr unsigned long TiempoMinimoParaReanudar = 1000;
constexpr unsigned long VentanaProgramacionMs = 2000;
constexpr bool AvisoListoLed = true;
constexpr int ParpadeosListo = 3;
constexpr unsigned long PeriodoParpadeoListo = 150;


constexpr int rutinaSegunInterruptores(int dip) {
    return (dip & 3) == 0 ? 1 : (dip & 3) == 1 ? 2 : (dip & 3) == 2 ? 3 : 4;
}

constexpr int RutinaForzada = -1;
constexpr int LadoForzado = 0;

#endif
