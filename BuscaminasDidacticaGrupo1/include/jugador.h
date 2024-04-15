#ifndef JUGADOR_H
#define JUGADOR_H
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

#endif // JUGADOR_H
