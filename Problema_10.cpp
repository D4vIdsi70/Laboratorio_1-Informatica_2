/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.



#include <iostream>


bool esPrimo(int a);

int main(){
    
    int n;
    std::cout<< "Ingrese el enesimo numero: ";
    std::cin>> n;
    int aux = 1;
    int enesimoPrimo = 0;
    while(aux <= n){
        int auxMenor = 1;
        while(auxMenor > 1){
            
            if(bool(esPrimo(auxMenor))){
               enesimoPrimo = auxMenor;
               aux += 1;
            }
            auxMenor += 1;
        }
        
    }
    
    std::cout<<"El primo numero "<< n << " es "<< enesimoPrimo;
    
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


*******************************************************************************/

#include <iostream>


bool esPrimo(int a);

int main(){
    
    int n;
    std::cout<< "Ingrese el enesimo numero: ";
    std::cin>> n;
    int aux = 1;
    int enesimoPrimo = 0;
    int auxMenor = 2;
    while(aux<=n){
        if(esPrimo(auxMenor)){
            enesimoPrimo = auxMenor;
            aux += 1 ;
            auxMenor +=1;
        }
        else{
            auxMenor+=1;
        }
        
        
        
    }
    
    std::cout<<"El primo numero "<< n << " es "<< enesimoPrimo;
    
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