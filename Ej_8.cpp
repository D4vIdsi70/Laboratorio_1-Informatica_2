#include <iostream>

using namespace std;

int main()
{
    int a;
    cout <<"Ingrese el numero para calcular su factorial: ";
    cin >> a;
    signed int b = 1;
    signed int fact = 1;
    while(b<=a){
        fact = fact*b;
        b += 1;
    }
    cout <<a<<"! = "<<fact;

    return 0;
}
