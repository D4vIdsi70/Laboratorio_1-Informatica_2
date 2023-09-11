/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main(){
    
    int a;
    int b;
    int c;
    std::cout<<"Ingrese el numero A: " << std::endl;
    std::cin>>a;
    std::cout<<"Ingrese el numero B: " << std::endl;
    std::cin>>b;
    std::cout<<"Ingrese el numero C: " << std::endl;
    std::cin>>c;
     
    int aux = 1;
    int multiplo = 1;
    int sumaA = 0;
    int sumaB = 0;
    while(aux < c){
        int control = 0;
        control = a*multiplo;
        while(control < c){
            if(multiplo==1){
                sumaA += (a*multiplo);
                std::cout<< (a*multiplo);
                multiplo += 1;
                control = a*multiplo;
            }
            else{
                sumaA += (a*multiplo);
                std::cout<< " + " << (a*multiplo);
                multiplo += 1;
                control = a*multiplo;
            }
            
        }
        
        multiplo = 1;
        control = b*multiplo;
        while(control < c){
            
            if(((b*multiplo)%a) == 0){
                multiplo += 1;
                control = b*multiplo;
            }
            
            else{
                sumaB += (b*multiplo);
                std::cout<< " + " <<(b*multiplo);
                multiplo += 1;
                control = b*multiplo;
            }
        }
        
        aux += c;
        std::cout<< " = " << (sumaA + sumaB);
        
    }
    
    return 0;
}

