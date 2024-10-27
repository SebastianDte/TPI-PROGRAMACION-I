#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
using namespace std;

//constantes para tamaño de vectores
const int NOMBRES_TAMANO = 2;


//Cabeceras para el menú
int mostrarMenu();      
void mostrarCreditos(); 
void jugar(string (&vecNombres)[NOMBRES_TAMANO]);
bool confirmarSalida();

//Cabeceras de funciones para JUGAR
void ingresoNombres(string (&vecNombres)[NOMBRES_TAMANO]);
void cambiarNombre(string (&vecNombres)[NOMBRES_TAMANO]);
int JugadorQueEmpieza();

#endif
