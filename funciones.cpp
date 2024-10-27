#include <iostream>
using namespace std;
#include "funciones.h"
#include <cstdlib> 
#include <ctime>   
//Funciones para  el menú
int mostrarMenu() {
    setlocale(LC_CTYPE,"Spanish");
    system("cls");
    int opcion;
    cout << "-------------------------------------------------------------------------------------------\n";
    cout << "                             ***        BONZO       ***                                   \n";
    cout << "-------------------------------------------------------------------------------------------\n";
    cout << "Elige una opción: " << endl;
    cout << "1. Jugar\n";
    cout << "2. Estadísticas\n";
    cout << "3. Créditos\n";
    cout << "-------------------------------------------------------------------------------------------\n";
    cout << "0. Salir\n";
    cout << "Selecciona una opción: ";
    cin >> opcion;
    return opcion; 
}

bool confirmarSalida() {
    char respuesta;
    do {   
        cout << "Estás seguro que desea salir del juego? (s/n): ";
        cin >> respuesta;

        if (respuesta == 's' || respuesta == 'S'){
            return true;
        }else if (respuesta == 'n' || respuesta == 'N'){
            return false;
        }else{
            cout << "Ingrese una opción válida (s/n).\n";
        }
    } while (true);
}

void mostrarCreditos() {
    cout << "Juego desarrollado por Sebi y su equipo.\n";
    cout << "Gracias por jugar a Bonzo!\n";
}


//Funciones para Jugar
void jugar(string (&vecNombres)[NOMBRES_TAMANO]) {
    ingresoNombres(vecNombres); 
}

void ingresoNombres(string (&vecNombres)[NOMBRES_TAMANO]) {
    string nombre;
    char resp = 'n';

    for (int x = 0; x < NOMBRES_TAMANO; x++) {
        cout << "Ingrese el nombre del jugador numero " << x + 1 << ": " << endl;
        cin >> nombre;
        vecNombres[x] = nombre;
    }
     system("cls");
    //Para cambiar los nombres
    while (resp == 'n' || resp == 'N') {
        
        cout << "----------------------------------------------------------------------------------------------------------" << endl;
        cout << "NOMBRES JUGADORES"<<endl;
        for (int i = 0; i < NOMBRES_TAMANO; i++) {
            cout << "Jugador numero " << i + 1 << ": " << vecNombres[i] << endl;
        }
        cout << "----------------------------------------------------------------------------------------------------------" << endl;
        cout << "¿Confirma los nombres? (S/N)" << endl;
        
        cin >> resp;
        system("cls");

        if (resp == 'n' || resp == 'N') {
            cambiarNombre(vecNombres);
            resp = 'n';
        }else if(resp != 's' && resp != 'S'){
            cout<<"Ingresó una opción invalida"<<endl;
            resp = 'n';
        }
    }
}

void cambiarNombre(string (&vecNombres)[NOMBRES_TAMANO]) {
    int jugador;
    while (true) {  
        cout << "Ingrese el número del jugador que desea cambiar (1/2): ";
        cin >> jugador;

        if (jugador == 1 || jugador == 2) {
            cout << "Ingrese el nuevo nombre para el jugador numero " << jugador << ": " << endl;
            cin >> vecNombres[jugador - 1];
            system("cls");
            break;  
        } else {
            cout << "Número de jugador inválido. Debe ser 1 o 2." << endl;
        }
    }
}

int JugadorQueEmpieza(){
    int dado = rand() % 6 + 1; 
    cout << "Dado inicial: " << dado << endl;
    return (dado % 2 == 0) ? 2 : 1; 
}

void jugarRonda(int jugadorActual, string (&vecNombres)[NOMBRES_TAMANO] ){
    int jugadorInicial = JugadorQueEmpieza();
    string nombreJugador = vecNombres[jugadorActual - 1]; 
    cout << "El jugador que inicia es: " << vecNombres[jugadorInicial - 1] << endl;
    
}