#include <iostream>

using namespace std;

int main()
{

    //Declaracion de variables
    unsigned int i = 1, x, y;
    unsigned int potencia = 1;

    //Titulo correcpondiente
    cout << "\n";
    cout << "     Potencia de n numero" << endl;
    cout << "\n";

    //Peticion de variables
    cout << " Escriba la base de la potencia: ";
    cin >> x;
    cout << " Escriba el exponente de la potencia: ";
    cin >> y;

    //Ciclo while para la potencia
    while ( i <= y )
    {
        potencia *=  x;
        ++i;
    }

    //Muestra de resultado
    cout << "\n";
    cout << "      La potencia es: " << potencia << endl;

    return 0;
}
