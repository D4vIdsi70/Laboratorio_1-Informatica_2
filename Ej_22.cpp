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
    int numero, seg, min, hora;
    
    cout << "Ingrese el número a convertir: ";
    cin >> numero;
    hora = numero/3600;
    numero = numero - (hora*3600);
    min = numero/60;
    numero = numero - (min*60);
    seg = numero;
    cout << hora << " : " << min << " : " << seg;
    
    
    return 0;
}