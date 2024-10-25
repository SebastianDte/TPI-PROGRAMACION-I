#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
using namespace std;

//FUNCIÓN PARA INGRESAR LOS NOMBRES
void ingresoNombres(string vecNombres[2]){
        cout<<endl;
        cout<<"                                        *** BONZO ***                                                  "<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Antes de comenzar deben registrar sus nombres: "<<endl;
        cout<<endl;

        string nombre ;
        char resp= 'n';

        while(resp == 'n' || resp == 'N'){

            for(int x=0;x<2;x++){
                cout << "Ingrese el nombre del jugador numero "<<x+1<<": " << endl;
                cin>>nombre;
                vecNombres[x]=nombre;
            }

            cout<<"----------------------------------------------------------------------------------------------------------";
            cout<<endl;
            for(int i=0;i<2;i++){
                cout<<"Jugador numero "<<i+1<<": "<<vecNombres[i]<<endl;
                cout<<endl;
            }
            cout<<"----------------------------------------------------------------------------------------------------------";
            cout<<endl;
            cout<<"¿Confirma los nombres? (S/N)"<<endl;
            cin>> resp;

        }
    }

//FUNCIÓN PARA DETERMINAR QUE JUGADOR EMPIEZA
 int JugadorQueEmpieza(string vecNombres[2])
{
    system("cls");
    cout<< "se lanza el dado..."<<endl;
    system("pause");
    srand(time(0));
    int dado = rand() % 6 + 1;

    switch(dado)
    {


    case 1:
    system("cls");
    cout <<  "+-------+" << endl << "|       |" << endl << "|   x   |"<<endl<<"|       |"<<endl<<"+-------+"<<endl;
    system("pause");

    break;

    case 2:
    system("cls");
    cout <<  "+-------+" << endl << "|     x |" << endl << "|       |"<<endl<<"| x     |"<<endl<<"+-------+"<<endl;
    system("pause");

    break;

    case 3:
    system("cls");
    cout <<  "+-------+" << endl << "| x     |" << endl << "|   x   |"<<endl<<"|     x |"<<endl<<"+-------+"<<endl;
    system("pause");

    break;

    case 4:
    system("cls");
    cout <<  "+-------+" << endl << "| x   x |" << endl << "|       |"<<endl<<"| x   x |"<<endl<<"+-------+"<<endl;
    system("pause");

    break;

    case 5:
    system("cls");
    cout <<  "+-------+" << endl << "| x   x |" << endl << "|   x   |"<<endl<<"| x   x |"<<endl<<"+-------+"<<endl;
    system("pause");

    break;

    case 6:
    system("cls");
    cout <<  "+-------+" << endl << "| x   x |" << endl << "| x   x |"<<endl<<"| x   x |"<<endl<<"+-------+"<<endl;
    system("pause");

    break;
    }
    if(dado%2==1)
    {
        cout<< "El jugador 1 "<<vecNombres[0]<< "comienza el juego"<< endl;
        return 1;
    }
    else
    {
        cout<< "El jugador 2 "<<vecNombres[1]<< "comienza el juego"<< endl;
        return 2;
    }


}

bool confirmarSalida(bool &salida){
    return true;
}
//FUNCIÓN PARA LANZAR EL MENÚ



#endif