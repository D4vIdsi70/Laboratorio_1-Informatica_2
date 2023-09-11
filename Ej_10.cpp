#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Ingrese el numero a evaluar: ";
    cin >> a;
    b = 2;
    cout <<"Multiplos de " <<a<< " menores que 100: " << "\n";

    while(b<=100){
        if(b%a == 0){
            cout <<b<< "\n";
        }
       b += 1;
    }
    return 0;
}
