#include <iostream>
#include "menu.h"
using namespace std;

int mostrarMenu() {
    setlocale(LC_CTYPE,"Spanish");
    int opcion;
    cout << "-------------------------------------------------------------------------------------------\n";
    cout << "                             ***        BONZO       ***                                   \n";
    cout << "-------------------------------------------------------------------------------------------\n";
    cout << "Elige una opci�n: " << endl;
    cout << "1. Jugar\n";
    cout << "2. Estad�sticas\n";
    cout << "3. Cr�ditos\n";
    cout << "-------------------------------------------------------------------------------------------\n";
    cout << "0. Salir\n";
    cout << "Selecciona una opci�n: ";
    cin >> opcion;
    return opcion; 
}

bool confirmarSalida() {
    char respuesta;
    do {
        cout << "�Est� seguro que desea salir del juego? (s/n): ";
        cin >> respuesta;

        if (respuesta == 's' || respuesta == 'S') {
            return true;
        } else if (respuesta == 'n' || respuesta == 'N') {
            return false;
        } else {
            cout << "Ingrese una opci�n v�lida (s/n).\n";
        }
    } while (true);
}

void mostrarCreditos() {
    cout << "Juego desarrollado por Sebi y su equipo.\n";
    cout << "�Gracias por jugar a Bonzo!\n";
}
