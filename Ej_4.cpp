#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout <<"Ingrese el numero A: ";
    cin >> a;
    cout <<"Ingrese el numero B: ";
    cin >> b;
    if(a<b){
        cout <<"El menor es: " << a;
    }
    else{
        cout <<"El menor es: " << b;
    }
    return 0;
}
