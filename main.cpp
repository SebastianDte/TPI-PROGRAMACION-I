#include <iostream>
#include "menu.h"
using namespace std;

int main() {
    setlocale(LC_CTYPE,"Spanish");

    bool salir = false;

    do {
        int opcion = mostrarMenu();  

        switch (opcion) {
            case 1:
                cout << "Iniciando juego...\n";
                break;
            case 2:
                cout << "Mostrando estadísticas...\n";
                break;
            case 3:
                cout << "Mostrando Creditos...\n";
                mostrarCreditos(); 
                break;
            case 0:
                salir = confirmarSalida();
                break;
            default:
                cout << "Opción inválida.\n";
                break;
        }
    } while (!salir);

    cout << "¡Gracias por jugar a Bonzo! Hasta la próxima.\n";
    return 0;
}
