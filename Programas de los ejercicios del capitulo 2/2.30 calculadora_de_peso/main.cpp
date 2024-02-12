#include <iostream>

using namespace std;

int main()
{
    float peso;
    float altura;
    float bmi;

    cout << "\n" << endl;
    cout << "  Calculadora del indice de masa corporal " << endl;
    cout << "\n" << endl;
    cout << "Escriba su peso (en kilogramas): " << endl;
    cin >> peso;
    cout << "Escriba su altura (en metros): " << endl;
    cin >> altura;

    cout << "\n" << endl;
    bmi = (peso)/((altura)*(altura));
    cout << "  Su indice de masa corporal (BMI) es: " << bmi << endl;

    if (bmi < 18.5)
    {cout << "  Se encuentra en bajo peso" << endl;}
    else if ( (bmi > 18.5) and (bmi < 24.9) )
    {cout << "  Se encuentra en peso normal" << endl;}
    else if ( (bmi > 25) and (bmi < 29.9) )
    {cout << "  Se encuentra en sobrepeso" << endl;}
    else if (bmi > 30)
    {cout << "  Se encuentra en obesidad" << endl;}

    return 0;
}
