#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    double radio;
    int diametro, circu, area;

    //Titulo correspondiente
    cout << "\n" << endl;
    cout << "      Calculos de un circulo " << endl;
    cout << "\n" << endl;

    //Peticion de variables
    cout << " Escriba el radio de un circulo: ";
    cin >> radio;

    cout << "\n" << endl;

    //Calculos para el  circulo
    diametro = radio * radio;
    circu = 2*(3.14159)*radio;
    area = (3.14159)*diametro;

    //Muestra de resultado
    cout << "  El diametro del circulo es: " << diametro << endl;
    cout << "  La circunferencia del circulo es: " << circu << endl;
    cout << "  El area del circulo es: " << area << endl;

    return 0;
}
