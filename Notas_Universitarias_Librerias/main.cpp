#include <iostream>
#include "PrimerSemestre.h"
#include "SegundoSemestre.h"
#include "TercerSemestre.h"

using namespace std;

int main()
{
    string nom1, nom2, nom3, nom4, nom5;
    srand(getpid());

    cout << "\n";
    cout << "     Notas de los alumnos de la Univesidad Mariano Galvez" << endl;
    cout << "\n";

    cout << "         Ingrese el nombre del alumno No.1: ";
    cin >> nom1;
    cout << "\n";
    cout << "         Ingrese el nombre del alumno No.2: ";
    cin >> nom2;
    cout << "\n";
    cout << "         Ingrese el nombre del alumno No.3: ";
    cin >> nom3;
    cout << "\n";
    cout << "         Ingrese el nombre del alumno No.4: ";
    cin >> nom4;
    cout << "\n";
    cout << "         Ingrese el nombre del alumno No.5: ";
    cin >> nom5;
    cout << "\n";

    system("cls");

    cout << "\n";
    cout << " Notas del primer semestre" << endl;

    PrimerSemestre Nombresitos(nom1, nom2, nom3, nom4, nom5);
    Nombresitos.datos();
    cout << "\n";

    cout << "\n";
    cout << " Notas del segundo semestre" << endl;

    SegundoSemestre Nombresitos2(nom1, nom2, nom3, nom4, nom5);
    Nombresitos2.datos();
    cout << "\n";

    cout << "\n";
    cout << " Notas del tercer semestre" << endl;

    TercerSemestre Nombresitos3(nom1, nom2, nom3, nom4, nom5);
    Nombresitos3.datos();
    cout << "\n";

    return 0;
}
