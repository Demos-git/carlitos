#include <iostream>
#include <windows.h>

int dia;

using namespace std;
int main(){

    cout << "Ingresa un número (1-4): ";
    cin >> dia;
switch (dia)
{
case 1:
    cout << "Invierno";
    break;
case 2:
    cout << "Verano";
    break;
case 3:
    cout << "otoño";
    break;
case 4:
    cout << "Primavera";
    break;

default:
    cout << "Ingresa un valor valido";
    break;
}

}
