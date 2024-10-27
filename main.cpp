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
            cout << "Mostrando estad�sticas...\n";
            //Funci�n para mostrar estadisticas
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
            cout << "Opci�n inv�lida.\n";
            system("pause");
            break;
        }

    } while (!salir);

    cout << "Gracias por jugar a Bonzo! Hasta la pr�xima.\n";
    return 0;
}
