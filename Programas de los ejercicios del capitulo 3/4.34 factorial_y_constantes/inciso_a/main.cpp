#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    int facto=1, x, i=1;

    //Titulo correspondiente
    cout << "\n";
    cout << "    Factorial de un numero" << endl;
    cout << "\n";

    //Peticion de variables
    cout << " Escriba un numero: ";
    cin >> x;

    //If para asegurarse de que el numero sea positivo
    if (x > 0)
    {

        //While para realizar las multiplicaciones
        while (i <= x)
        {
            facto = facto * i;
            i++;
        }

        //Muestra de resultado
        cout << "\n";
        cout << " El factorial (n!) de " << x << " es: " << facto << endl;
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
