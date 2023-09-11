/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.



#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int dim, aux;
    
    cout << "Ingrese la dimensión del cuadrado: ";
    cin >> dim;
    aux = 1;
    char simb = "+";
    char esp = " "
    while (aux <= dim){
        if (aux == 1 || aux == dim){
            
        }
        
        else{
            cout << simb << esp*(dim-2) << simb;
        }
        
        aux += 1;
    }
    
    return 0;
}

*******************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int term;
    cout << "Ingrese la cantidad de términos para el cálculo de la aproximación: ";
    cin >> term;
    int cont = 1;
    float d = 1.0;
    float comp = 0.0;
    float aprox = 0.0;
    
    while (cont <= term){
        
        if ((cont%2) != 0){
            comp = 1.0/d;
        }
        
        else{
            comp = -1.0*(1.0/d);
        }
        
        aprox += comp;
        cont += 1;
        d += 2.0;
        
    }
    
    aprox = 4.0*aprox;
    
    cout << "pi es aproximadamente: " << aprox;
    
    return 0;
}