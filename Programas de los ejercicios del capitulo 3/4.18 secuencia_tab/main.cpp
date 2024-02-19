#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    int x=1;

    //Titulos del diagrama
    cout << "" << endl;
    cout << "   N" << "\t" << "10*N" << "\t" << "100*N" << "\t" << "1000*N" << endl;
    cout << "" << endl;

    //Ciclo while que aumenta en x
    while (x <= 5)
    {
        cout << "   " << x << "\t" << x*10 << "\t" << x*100 << "\t" << x*1000 << endl;
        x++;
    }

    return 0;
}
