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
    int numero;
    int aux = 0;
    
    cout << "Ingrese el número a evaluar: ";
    cin >> numero;
    
    while (aux <= numero) {
        if (pow(aux, 2) == numero){
            cout << numero << " es un cuadrado perfecto.";
            aux = numero + 1;
        }
        
        if (aux == numero){
            cout << numero << " NO es un cuadrado perfecto.";
        }
        
        aux += 1;
    }
     
    return 0;
}