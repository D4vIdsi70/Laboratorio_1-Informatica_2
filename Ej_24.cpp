/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>

int main()
{
    int dim, aux;
    
    std::cout << "Ingrese la dimensión del cuadrado: ";
    std::cin >> dim;
    aux = 1;
    while (aux <= dim){
        if(aux == 1 || aux == dim){
            int auxBase = 1;
            while(auxBase <= dim){
                
                std::cout << "+";
                auxBase += 1;
                
            }
        std::cout << std::endl;
        }
        else{
            std::cout << "+";
            int auxLado = 1;
            while(auxLado <= dim-2){
                
                std::cout << " ";
                auxLado += 1;
                
                }
                
            std::cout << "+" << std::endl;
        }
        aux += 1;
        
    }
    
    return 0;
}





