#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

char *convMinMay(char *cadena, int longitud);

int main()
{
    char cadena[255];
    int longitud;
    cout << "Ingrese la cadena de caracteres: ";
    cin.getline(cadena, 255, '\n' );
    longitud = strlen(cadena);
    char *cadenaConv = new char[longitud];
    cadenaConv = convMinMay(cadena, longitud);
    cout << cadenaConv;
    delete []cadenaConv;
    return 0;
}

char *convMinMay(char *cadena, int longitud){
    char letra = cadena[0];
    char *cadConv = new char[longitud];
    for(int i = 0; i < longitud; i++){
        
        if(cadena[i] < 123 && cadena[i] > 96){
            letra = toupper(cadena[i]);
            cadConv[i] = letra;
        }
        else if(cadena[i] < 91 && cadena[i] > 64){
            cadConv[i] = cadena[i];
        }
        else{
            cadConv[i] = cadena[i];
        }
        
    }
    return cadConv;
}

