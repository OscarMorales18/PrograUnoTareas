#include <iostream>

using namespace std;

int main()
{
    float x;
    float y;

    cout << "\n" << endl;
    cout << "  Operaciones Basicas " << endl;
    cout << "\n" << endl;
    cout << "Escriba un numero: " << endl;
    cin >> x;
    cout << "Escriba otro numero: " << endl;
    cin >> y;

    cout << "\n" << endl;
    cout << "  Suma: " << x << "+" << y << "=" << x+y << endl;
    cout << "  Resta: " << x << "-" << y << "=" << x-y << endl;
    cout << "  Multiplicacion: " << x << "*" << y << "=" << x*y << endl;
    cout << "  Division: " << x << "/" << y << "=" << x/y << endl;

    return 0;
}
