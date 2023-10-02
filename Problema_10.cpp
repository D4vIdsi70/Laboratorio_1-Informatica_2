#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
    char cadena[255];
    int longitud;
    cout << "Ingrese la cadena de caracteres: ";
    cin.getline(cadena, 255, '\n' );
    longitud = strlen(cadena);
    int *resultado = new int[longitud];
    for(int i = 0; i<longitud; i++){
        if(cadena[i] == 77){
            resultado[i] = 1000;
        }else if(cadena[i] == 68){
            resultado[i] = 500;
        }else if(cadena[i] == 67){
            resultado[i] = 100;
        }else if(cadena[i] == 76){
            resultado[i] = 50;
        }else if(cadena[i] == 88){
            resultado[i] = 10;
        }else if(cadena[i] == 86){
            resultado[i] = 5;
        }else if(cadena[i] == 73){
            resultado[i] = 1;
        }
    }
    int total = resultado[0];
    
    for(int i = 1; i < longitud; i++){
        if(resultado[i] > resultado[i - 1]){
            total = (total - resultado[i - 1]) + (resultado[i] - resultado[i - 1]);
        }
        else{
            total += resultado[i];
        } 
    }
    cout << "El número ingresado es " << cadena << endl;
    cout << "Que corresponde a " << total;
    delete []resultado;
    return 0;
}
