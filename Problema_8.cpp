#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

char *obtenerNumeros(char *cadena, int longitud, int cont);
char *obtenerLetras(char *cadena, int longitud, int cont);

int main()
{
    char cadena[255];
    int longitud;
    cout << "Ingrese la cadena de caracteres: ";
    cin.getline(cadena, 255, '\n' );
    longitud = strlen(cadena);
    char *cadenaing = new char[longitud];
    int contLetras = 0;
    int contNum = 0;
    for(int i = 0; i<longitud; i++){
        if(cadena[i] < 58 && cadena[i] > 47){
            contNum += 1;
        }
        else{
            contLetras += 1;
        }
    }
    char *cadNum = new char[contNum];
    char *cadLetras = new char[contLetras];
    cadNum = obtenerNumeros(cadena, longitud, contNum);
    cadLetras = obtenerLetras(cadena, longitud, contLetras);
    cout << cadena << endl;
    cout << cadNum << endl;
    cout << cadLetras;
    delete []cadenaing;
    delete []cadNum;
    delete []cadLetras;
    return 0;
}

char *obtenerNumeros(char *cadena, int longitud, int cont){
    int a = 0;
    char *cadenanumeros = new char[cont];
    for(int i = 0; i < longitud; i++){
        if(cadena[i] < 58 && cadena[i] > 47){
            cadenanumeros[a] = cadena[i];
            a += 1;
        }
        
    }
    return cadenanumeros;
}

char *obtenerLetras(char *cadena, int longitud, int cont){
    int a = 0;
    char *cadenaletras = new char[cont];
    for(int i = 0; i < longitud; i++){
        if(cadena[i] > 58 || cadena[i] < 47){
            cadenaletras[a] = cadena[i];
            a += 1;
        }
    }
    return cadenaletras;
}