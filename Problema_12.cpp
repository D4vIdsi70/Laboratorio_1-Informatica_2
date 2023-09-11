/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

bool esPrimo(int a);

int main()
{
    int a;
    std:: cout << "Ingrese el número a evaluar: ";
    std:: cin>> a;
    int aux = 1;
    int valor = 0;
    while(aux <= a){
        if(bool(esPrimo(aux)) && (a%aux == 0)){
            valor = aux;
        }
        
        aux +=1;
    }
    std:: cout << "El mayor factor primo de " << a << " es " << valor << std::endl;

    return 0;
}

bool esPrimo(int a){
    if(a ==2){
        return true;
    }
    
    for(int i=2 ; i < a; i++){
        if(a%i == 0){
            return false;
        }
    }
    return true;
}