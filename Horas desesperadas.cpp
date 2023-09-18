/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    bool bandera = true;
    int hora, tiempoExtra;
    while(bandera){
        std::cout<< "Ingrese la hora actual: "; std::cin >> hora;
        if((hora%100) >= 60 || (hora%10000) > 2400){
            std::cout<< hora << " es un tiempo invalido" << std::endl;
        }
        else{
            bandera = false;
        }}
    
    std::cout<< "Ingrese el tiempo a sumar: "; std::cin >> tiempoExtra;
    
    int minTotales = 0;
    int minHoras = 0;
    minTotales = (hora%100) + (tiempoExtra%100);
    minHoras = minTotales/60;
    minTotales = minTotales%60;
    
    int horasTotales = 0;
    int horaDia = 0;
    hora = (hora - (hora%100))/100;
    tiempoExtra = (tiempoExtra - (tiempoExtra%100))/100;
    horasTotales = tiempoExtra + hora + minHoras;
    horaDia = (horasTotales%24)*100;
    hora = horaDia + minTotales;
    
    std::cout << "La hora es " << hora;
    
    
    
    return 0;
}