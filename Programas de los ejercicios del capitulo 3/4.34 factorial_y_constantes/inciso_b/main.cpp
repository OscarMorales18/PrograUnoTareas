#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    int x, i=1;
    float facto=1, div=0, e=1;

    //Titulo correspondiente
    cout << "\n";
    cout << "    Constante matematica e" << endl;
    cout << "\n";

    //Peticion de variables
    cout << " Escriba la precision para e: ";
    cin >> x;

    //If para asegurarse de que el numero sea positivo
    if (x > 0)
    {
        //While para realizar las divisiones y sumas
        while (i <= x)
        {
            facto = facto * i;
            div = 1/(facto);
            e = e + div;
            i++;
        }

        //Muestra de resultado
        cout << "\n";
        cout << " La constante e con precision de " << x << " es: " << e << endl;
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
