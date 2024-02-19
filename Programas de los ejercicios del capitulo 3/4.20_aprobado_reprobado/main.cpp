#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    unsigned int aprobados = 0;
    unsigned int reprobados = 0;
    unsigned int contadorEstudiantes = 0;

    cout << "\n" << endl;

    //Ciclo while para el limite de estudiantes
    while ( contadorEstudiantes < 10 )
    {
        cout << "  Escriba el resultado (1 = aprobado, 2 = reprobado): ";
        int resultado = 0;
        cin >> resultado;

        //If por si salen aprobados
        if ( resultado == 1 )
        {
            aprobados = aprobados + 1;
            contadorEstudiantes = contadorEstudiantes + 1;
        }

        //Else if por si salen reprobados
        else if ( resultado == 2 )
        {
            reprobados = reprobados + 1;
            contadorEstudiantes = contadorEstudiantes + 1;
        }

        //Else por si no se coloca un 1 o un 2
        else
        {
            cout << "\n" << endl;
            cout << "  Solo se admiten el 1 y el 2, ingrese de nuevo: " << endl;
        }
    }

    //Muestra de resultado
    cout << "\n" << endl;
    cout << "  Aprobados " << aprobados << "\n  Reprobados " << reprobados << endl;

    //If por si salen mas de 8 aprobados
    if ( aprobados > 8 )
    {
        cout << "\n" << endl;
        cout << "  Bono para el instructor" << endl;
    }

    return 0;
}
