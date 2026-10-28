#ifndef EVENTOS_H_INCLUDED
#define EVENTOS_H_INCLUDED
#define DISPONIBLE 1
#define CANCELADO -1
#define FINALIZADO 2
#define ERROR_EVENTO_NO_ENCONTRADO -99
#define ERROR_DATOS_INVALIDOS -1
#include <stdio.h>
#include "Establecimientos.h"
#define LIBRE 1
#define OCUPADO 0

typedef struct{
    char id[10];
    char nombre[30];
    char tipoEvento[30];
    unsigned idEstablecimiento;
    unsigned long long fechaHora;
    int estado;
}tEvento;

void leerCadenaSegura(char *destino, int tamMaximo);
int AltaEvento();
int consultarEventos();
int buscarEvento(const char *idBuscado, tEvento *evento);
int gestionarEvento();
int buscarEvento();
int buscarEventoAdmin();
int reporteOcupacion();
int buscarEventosPorEstablecimientoAdmin();
int contarRegistrosTotales(FILE *pf);
int consultarEventoPorId();
int contarEntradasPorCriterio(char *idEvento, const char *estadoBuscado);
int buscarEventoEficiente(const char *idBuscado , tEvento *eventoEncontrado);
float calcularRecaudacionVigente(char *idEvento);
int existeEvento(char *idBuscado);
int consultarVentas();
void imprimirFechaHora(unsigned long long fechaHora);
int contadorMatriz(tSector *sec,int estado);
#endif // EVENTOS_H_INCLUDED
