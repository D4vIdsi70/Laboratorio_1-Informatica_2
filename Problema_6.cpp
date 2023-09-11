/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.


#include <iostream>

int main(){
    
    int num;
    bool bandera = true;
    
    std::cout<< "Ingrese un  número para verificar si es un palindromo: ";
    std::cin>>num;
    
    while(bandera){
        int aux = 0;
        .
    }
    
    return 0;
}

*******************************************************************************/
#include <iostream>

int factorial(float a);

int main(){
    int aprox;
    int n = 2;
    float p = 1.0;
    float q;
    float fact = 1.0;
    float resultado = 0.0;
    std::cout<< "Ingrese el numero de terminos para la aproximacion: " << std::endl;
    std::cin>> aprox;
    while(n <= aprox){
        
        q = factorial(fact);
        resultado += (p/q);
        fact += 1.0;
        
        n += 1;
    }
    
    resultado += 1;
    std::cout<<"e es aproximadamente: " << resultado;
    
    return 0;
}


int factorial(float a){
    float b = 1;
    float c = 1;
    while(b <= a){
        c *= b;
        b += 1;
    }
    
    return c;
}