/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <cstdlib>

int main(){
    srand(time(NULL));
    
    int num = rand()%101;
    int cont = 0;
    int B;
    
    std::cout << "Trata de adivinar, ingresa tu primer intento: " << std::endl;
    std::cin >> B;
    if(B == num){
        std::cout << "Felicidades! Y a la primera, serás la pesadilla de los casinos.";
    }
    else{
        while(B != num){
            cont += 1;
            if(B < num){
                std::cout << B << " es menor que el numero generado." << num << std::endl;
            }
            else{
                std::cout << B << " es mayor que el numero generado." << std::endl;
            }
            
            std::cout <<"Trata de nuevo. Ingresa tu siguiente intento: " << std::endl;
            std::cin >> B;
        
        }
    std::cout << "Listo! Lo adivinaste, " << B << " es igual a " << num << ". Te tardaste " << cont << " intentos." << std::endl;
    }
    
    return 0;
}