#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    double x,y,z;

    //Titulo correspondiente
    cout << "\n" << endl;
    cout << "      Comprobacion de un triangulo" << endl;
    cout << "\n" << endl;

    //Peticion de variables
    cout << " Escriba un lado del triangulo: ";
    cin >> x;
    cout << " Escriba el segundo lado del triangulo: ";
    cin >> y;
    cout << " Escriba el ultimo lado del triangulo: ";
    cin >> z;
    cout << "\n" << endl;

    //If para comprobar los lados
    if ( (x + y > z) and (x + z > y) and (y + z > x) )
    {
        //Muestra de resultado
        cout << " Los lados " << x << ", " << y << " y " << z << " generan un triangulo" << endl;
    }
    else
    {
        cout << " Los lados " << x << ", " << y << " y " << z << " no generan un triangulo" << endl;
    }

    return 0;
}
