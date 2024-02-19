#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    int x=5,y=8;

    //Primer caso
    if ( x == 5 and y == 8 )
    {
        cout << "@@@@@@" << endl;
        cout << "$$$$$$" << endl;
        cout << "&&&&&&" << endl;
    }

    else
    {
        cout << "######" << endl;
    }

    cout << "\n";

    //Segundo caso
    if ( x == 5 and y == 8 )
    {
        cout << "@@@@@@" << endl;
    }

    else
    {
        cout << "######" << endl;
        cout << "$$$$$$" << endl;
        cout << "&&&&&&" << endl;
    }

    cout << "\n";

    //Tercer caso
    if ( x == 5 and y == 8 )
    {
        cout << "@@@@@@" << endl;
        cout << "&&&&&&" << endl;
    }

    else
    {
        cout << "######" << endl;
        cout << "$$$$$$" << endl;
    }

    cout << "\n";

    //Cuarto caso
    if ( x == 5 and y == 7 )
    {
        cout << "######" << endl;
        cout << "&&&&&&" << endl;
        cout << "$$$$$$" << endl;
    }

    else
    {
        cout << "@@@@@@" << endl;
    }

    return 0;
}
