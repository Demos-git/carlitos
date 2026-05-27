#include <iostream>
using namespace std;

int edad;
int main()
{

    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad >= 60)
    {
        cout << "Es adulto mayor";
    }
    else if (edad >= 18 && edad < 60)
    {
        cout << "Es un adulto";
    }
    else
    {
        cout << "Eres menor de edad";
    }
    return 0;
}