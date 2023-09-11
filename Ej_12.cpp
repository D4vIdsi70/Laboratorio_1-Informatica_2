/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N, potencia_N;
    cout<<"Ingrese el número a evaluar: ";
    cin >> N;
    potencia_N = 1;
    while (potencia_N <= 5) {
        int resultado = pow(N, potencia_N);
        cout << N << "∧ " << potencia_N << " = " << resultado << endl;
        potencia_N += 1;
    }
    
    return 0;
}