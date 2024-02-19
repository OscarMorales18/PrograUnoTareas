    #include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    int x,s,r,e,nx,res=1;
    float y=0;

    //Titulo correspondiente
    cout << "\n" << endl;
    cout << "              Pagos de horas" << endl;

    //While para comprobar si x es -1
    while ( res == 1  )
    {
        //Peticion de variables
        cout << "\n" << endl;
        cout << " Ingrese las horas trabajadas (-1 para salir): ";
        cin >> x;
        cout << " Ingrese la tarifa  por hora del empleado ($00.00): ";
        cin >> y;

        //Calculos para comprobar si es x es mayor o menor a 10
        if ( (x<40) and (x>0) )
        {
           s = x * y;
        }
        else if ( x>40 )
        {
            r = x - 40;
            nx = x - r;
            e = (y/2) + y;
            s = (nx * y) + ( r * e );
        }
        else if ( x == -1 )
        {
            res = res + 1;
        }

        //Muestra de resultado
        cout << " El salario es: " << s << endl;
    }

    return 0;
}
