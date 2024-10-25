#include <iostream>
using namespace std;
#include "funciones.h"

int main(int argc, char const *argv[])
{
    cout<<"Hola mundo" <<endl;
     int opcion;
    bool salida = false;
    string nombres[2];

    do{
        system("cls");
        cout<<endl;
        cout<<"-------------------------------------------------------------------------------------------"<<endl;
        cout <<"                             ***        BONZO       ***                                   "<< endl;
        cout<<"-------------------------------------------------------------------------------------------"<<endl;
        cout<<endl;
        cout<<"Elige una opcion: "<<endl;
        cout<<endl;
        cout<<"1- JUGAR";
        cout<<endl;
        cout<<"2- ESTADISTICAS";
        cout<<endl;
        cout<<"3- CREDITOS";
        cout<<endl;
        cout<<endl;
        cout<<"-------------------------------------------------------------------------------------------"<<endl;
        cout<<"0- SALIR"<<endl;
        cout<<endl;
        cout<<"Opcion: "<<endl;
        cin>>opcion;

        switch(opcion){
            case 1:
                system("cls");
                ingresoNombres(nombres);
                system("pause");
            break;
            case 2:
                system("cls");
                cout<<"Funcion estadistica"<<endl;
                system("pause");
            break;
            case 3:
                system("cls");
                cout<<"Funcion creditos"<<endl;
                system("pause");
            break;
            case 0:
                confirmarSalida(salida);
                if(salida)
                {
                    system("cls");
                    cout << "saliendo del juego..." << endl;
                    system("pause");
                    return 0;
                }
                else
                {
                    system("cls");
                    cout << "volviendo al menu..." << endl;
                    system("pause");
                }
            break;
            default:
                cout<<endl;
                cout<<"La opcion ingresada es incorrecta.";
                cout<<endl;
                system("pause");
            break;
        }
    } while(!salida);
    return 0;
}
