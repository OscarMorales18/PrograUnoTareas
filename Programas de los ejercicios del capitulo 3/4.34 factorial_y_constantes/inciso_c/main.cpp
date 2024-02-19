#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //Declaracion de variables
    int x, i=1, rem=0;
    float facto=1, div=0, e=1, po=0;

    //Titulo correspondiente
    cout << "\n";
    cout << "    Constante matematica e^x" << endl;
    cout << "\n";

    //Peticion de variables
    cout << " Escriba la precision para e^x: ";
    cin >> x;

    //If para asegurarse de que el numero sea positivo
    if (x > 0)
    {
        //While para realizar las divisiones, sumas y potencias
        while (i <= x)
        {
            facto = facto * i;
            po = pow(x,i);
            div = po/(facto);
            e = e + div;
            i++;
        }

        //Muestra de resultado
        cout << "\n";
        cout << " La constante e^x con precision de " << x << " es: " << e << endl;
        cout << "\n";

    }
    else
    {
        cout << "\n";
        cout << " El numero ingresado no debe de ser negativo.";
        cout << "\n";
    }

    return 0;
}
