#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    //Declaracion de variables
    int no1, no2, no3, no4, no5, cadena, num, cont=1;
    char x[100];

    //Titulo correspondiente
    cout << "\n" << endl;
    cout << "    Comprobacion de un palindromo" << endl;
    cout << "\n" << endl;

    //While para verificar que el numero ingresado tenda 5 digitos
    while (cont == 1)
    {
        //Peticion de variables
        cout << "  Ingrese un numero de 5 digitos: ";
        cin >> x;
        cout << "\n" << endl;

        cadena=strlen(x);

        //If para verificar que el numero ingresado tenda 5 digitos
        if (cadena > 5)
        {
            cout << "  El valor ingresado tiene mas de 5 digitos" << endl;
        }
        else if (cadena < 5)
        {
            cout << "  El valor ingresado tiene menos de 5 digitos" << endl;
        }
        else if (cadena == 5)
        {
            cont = cont + 1;
            num = atoi(x);
        }
    }

    //Calculos para determinar cada digito
    no1 = (num / 10000) % 10;
    no2 = (num / 1000) % 10;
    no3 = (num / 100) % 10;
    no4 = (num / 10) % 10;
    no5 = num % 10;

    //If para mostrar los resultados
    if ( (no1 == no5) and (no2 == no4) )
    {
        cout << "   El numero ingresado es un palindromo" << endl;
    }
    else
    {
        cout << "  El numero ingresado no es un palindromo" << endl;
    }

    return 0;
}
