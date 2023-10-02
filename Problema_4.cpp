#include <iostream>
#include <string.h>

using namespace std;

int convCadEnt(char *cadena, int longitud);

int main()
{
    char cadena[255];
    int numero;
    int longitud;
    cout << "Ingrese la cadena de caracteres: ";
    cin.getline(cadena, 255, '\n' );
    longitud = strlen(cadena);
    numero = convCadEnt(cadena, longitud);
    cout << numero;
    return 0;
}

int convCadEnt(char *cadena, int longitud){
    int numero = 0;
    for(int i = 0; i<longitud; i++){
        numero += cadena[i] - 48;
        numero *= 10;
    }
    numero /= 10;
    return numero;
}
