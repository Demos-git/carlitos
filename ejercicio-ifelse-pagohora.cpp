#include <iostream>
using namespace std;
int h, p, pt;

int main()
{
    cout << "Ingresa tu tiempo de trabajo: ";
    cin >> h;
    cout << "Ingresa tu pago por hora: ";
    cin >> p;
    if (h > 40)
    {
        cout << "Tu pago total es de: " << p * h * 1.5;
    }
    else
    {
        cout << "Tu pago total es de: " << p * h;
    }
    return 0;
}