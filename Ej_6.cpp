#include <iostream>

using namespace std;

int main()
{
    int a,b;
    signed int potencia = 1;

    cout <<"Ingrese el numero A: ";
    cin >> a;
    int valor = potencia;
    cout <<"Ingrese el numero B: ";
    cin >> b;
    while (potencia <= b) {
        valor = valor*a;
        potencia += 1;
    }
    cout << a <<"∧"<< b <<" = "<<valor;

    return 0;
}
