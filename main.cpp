#include <iostream>
using namespace std;
#include "funciones.h"

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    bool salir = false;
    string vecNombres[NOMBRES_TAMANO];

    do
    {
        int opcion = mostrarMenu();
        switch (opcion)
        {
        case 1:
            system("cls");
            cout << "Iniciando juego...\n";
            jugar(vecNombres);
            system("pause");
            break;
        case 2:
            system("cls");
            cout << "Mostrando estadísticas...\n";
            //Función para mostrar estadisticas
            system("pause");
            break;
        case 3:
            system("cls");
            cout << "Mostrando Creditos...\n";
            mostrarCreditos();
            system("pause");
            break;
        case 0:
            system("cls");
            salir = confirmarSalida();
            system("pause");
            break;
        default:
            system("cls");
            cout << "Opción inválida.\n";
            system("pause");
            break;
        }

    } while (!salir);

    cout << "Gracias por jugar a Bonzo! Hasta la próxima.\n";
    return 0;
}
