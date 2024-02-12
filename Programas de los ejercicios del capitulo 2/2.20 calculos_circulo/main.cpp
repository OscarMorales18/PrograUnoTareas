#include <iostream>

using namespace std;

int main()
{
    int radio, diametro;

    cout << "\n" << endl;
    cout << "  Calculos de un circulo " << endl;
    cout << "\n" << endl;
    cout << "Escriba el radio de un circulo: " << endl;
    cin >> radio;

    cout << "\n" << endl;
    diametro = radio * radio;
    cout << "  El diametro del circulo es: " << diametro << endl;
    cout << "  La circunferencia del circulo es: " << 2*(3.14159)*radio << endl;
    cout << "  El area del circulo es: " << (3.14159)*diametro << endl;

    return 0;
}
