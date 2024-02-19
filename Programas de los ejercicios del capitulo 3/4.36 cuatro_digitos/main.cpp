#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int no1, no2, no3, no4, cadena, num, cont = 1, no1mas7, no2mas7, no3mas7, no4mas7, jun1, jun2, jun3, jun4, div;
    char x[100];

    cout << "\n" << endl;
    cout << " Empleamiento de criptografia en un numero" << endl;
    cout << "\n" << endl;

    while (cont == 1)
    {
        cout << "  Ingrese un numero de 4 digitos: ";
        cin >> x;
        cout << "\n" << endl;

        cadena=strlen(x);

        if (cadena > 4)
        {
            cout << "  El valor ingresado tiene mas de 4 digitos" << endl;
        }
        else if (cadena < 4)
        {
            cout << "  El valor ingresado tiene menos de 4 digitos" << endl;
        }
        else if (cadena == 4)
        {
            cont = cont + 1;
            num = atoi(x);
        }
    }

    no1 = (num / 1000) % 10;
    no2 = (num / 100) % 10;
    no3 = (num / 10) % 10;
    no4 = num % 10;

    no1mas7 = no1 + 7;
    no2mas7 = no2 + 7;
    no3mas7 = no3 + 7;
    no4mas7 = no4 + 7;

    // union de los digitos 1 y 2

    if ( no1mas7 < 10 )
    {
        jun1 = (no1mas7 * 10) + no2mas7;
    }
    else if (no1mas7 > 9)
    {
        jun1 = (no1mas7 * 100) + no2mas7;
    }

    if ( no2mas7 < 10 )
    {
        jun1 = (no1mas7 * 10) + no2mas7;
    }
    else if (no2mas7 > 9)
    {
        jun1 = (no1mas7 * 100) + no2mas7;
    }

    // union de los digitos 3 y 4

    if ( no3mas7 < 10 )
    {
        jun2 = (no3mas7 * 10) + no4mas7;
    }
    else if (no3mas7 > 9)
    {
        jun2 = (no3mas7 * 100) + no4mas7;
    }

    if ( no4mas7 < 10 )
    {
        jun2 = (no3mas7 * 10) + no4mas7;
    }
    else if (no4mas7 > 9)
    {
        jun2 = (no3mas7 * 100) + no4mas7;
    }

    // union de los digitos completo

    if ( (jun1 > 88) and (jun1 < 100) )
    {
        jun3 = (jun1 * 100) + jun2;
    }
    else if ( (jun1 > 99) and (jun1 < 1000) )
    {
        jun3 = (jun1 * 1000) + jun2;
    }
    else if ( (jun1 > 1000) )
    {
        jun3 = (jun1 * 10000) + jun2;
    }


    if ( (jun2 > 88) and (jun2 < 100) )
    {
        jun3 = (jun1 * 100) + jun2;
    }
    else if ( (jun2 > 99) and (jun2 < 1000) )
    {
        jun3 = (jun1 * 1000) + jun2;
    }
    else if ( (jun2 > 1000) )
    {
        jun3 = (jun1 * 10000) + jun2;
    }

    div = jun3/10;

    cout << no1mas7 << "\t" << no2mas7 << "\t" << jun1 << "\t" << no3mas7 <<  "\t" << no4mas7 <<  "\t" << jun2 << endl;
    cout << jun3 << endl;
    cout << div << endl;

    return 0;
}
