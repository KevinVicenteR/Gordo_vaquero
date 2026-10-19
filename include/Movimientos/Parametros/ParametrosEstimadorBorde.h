#ifndef PARAMETROS_ESTIMADOR_BORDE_H
#define PARAMETROS_ESTIMADOR_BORDE_H

constexpr bool UsarEstimadorBorde = true;
constexpr bool EstimadorLimitaEmbestida = true;
constexpr float RadioDohyo = 0.385f;
constexpr float AnchoLineaBorde = 0.025f;
constexpr float DistanciaSensorPiso = 0.078f;
constexpr float SeparacionSensoresPiso = 0.04f;
constexpr float TrochaRuedas = 0.085f;
constexpr float VelocidadRuedaMaxima = 1.0f;
constexpr int ZonaMuertaPwm = 40;
constexpr float TauRuedaEstimador = 0.06f;
constexpr float RadioSalidaEstimado = 0.15f;
constexpr float IncertSalidaCentro = 0.06f;
constexpr float RadioSalidaRound3 = 0.33f;
constexpr float IncertSalidaRound3 = 0.06f;
constexpr float IncertRumboRound3 = 0.3f;
constexpr float ErrorDistancia = 0.3f;
constexpr float ErrorGiro = 0.25f;
constexpr float DerivaRumbo = 0.3f;
constexpr float EmpujonAtaque = 0.15f;
constexpr float EmpujonContacto = 0.4f;
constexpr float EmpujonLateral = 0.2f;
constexpr float AnguloLineaLado = 0.6f;
constexpr float IncertAnguloLinea = 0.5f;
constexpr float IncertPosicionLinea = 0.02f;
constexpr float SigmasSeguridad = 1.0f;
constexpr float MargenBorde = 0.09f;
constexpr float DesaceleracionFreno = 4.0f;
constexpr float RetardoReaccion = 0.04f;
constexpr int VelocidadMinimaEstimador = 100;
constexpr float IncertPosicionConfiable = 0.08f;
constexpr float IncertRumboConfiable = 0.8f;

#endif
