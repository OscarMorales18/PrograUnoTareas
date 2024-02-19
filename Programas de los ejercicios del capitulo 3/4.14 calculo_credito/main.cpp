#include <iostream>

using namespace std;

int main()
{
     //Declaracion de variables
    float v,w,x,y,z,res=1;

    //Titulo correspondiente
    cout << "\n" << endl;
    cout << "              Limite de credito" << endl;
    cout << "\n" << endl;

    //While para comprobar si x es -1
    while ( res == 1  )
    {
        //Peticion de variables
        cout << "\n" << endl;
        cout << " Ingrese el numero de cuenta (-1 para salir): ";
        cin >> v;
        cout << " Ingrese el saldo inicial: ";
        cin >> w;
        cout << " Ingrese los cargos totales: ";
        cin >> x;
        cout << " Ingrese los creditos totales: ";
        cin >> y;
        cout << " Ingrese el limite de credito: ";
        cin >> z;

        //Calculos para comprobar si la suma es mayor al credito
        if ( w+y > z )
        {
            //Muestra de resultado
           cout << " El nuevo saldo es: " << w+y << endl;
           cout << " Cuenta: " << v << endl;
           cout << " Limite de credito: " << z << endl;
           cout << " Saldo: " << w+y << endl;
           cout << " Se excedio el limite de su credito.";
        }
        else if ( w+y < z )
        {
            cout << " El nuevo saldo es: " << w+y    << endl;
        }
        else if ( x == -1 )
        {
            res = res + 1;
        }

    }

    return 0;
}
