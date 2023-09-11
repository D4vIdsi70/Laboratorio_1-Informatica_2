/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int promedio = 1;
    int numero = 0;
    int cont = 0;
    int suma = 0;
    int n;
    while (promedio != 0) {
        cont += 1;
        cout << "Ingrese el numero a coleccionar para promediar: ";
        cin >> n;
        numero = n;
        suma += numero;
        
        if (numero == 0){
            
            promedio = suma/(cont-1);
    
            cout << "El promedio es: " << promedio;
            
            promedio = 0;
        }
    }
     
    return 0;
}