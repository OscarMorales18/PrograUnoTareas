#include <fstream> //Libreria necesaria para la creacion, lectura y manejo de archivos
#include <iomanip> //Libreria necesaria para el comando setw()
#include <iostream>

using namespace std;

class jugador
{
    public:
        void pideDatos();
        string getNombre() const;

    private:
        string nombre;
};

void jugador::pideDatos()
{
    system("cls");
    fstream file;
    cout << "Ingrese un nombre: ";
    cin >> nombre;

    file.open("DatosPersonas.txt", ios::app | ios::out);
    file << left << setw(15) << nombre;
    file.close();
    cout << "\n" << endl;
    system("pause");
}

string jugador::getNombre() const
{
    return nombre;
}
