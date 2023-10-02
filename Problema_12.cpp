/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

const int dim = 10;
bool esCuadradoMagico(int matriz[dim][dim], int n);

int main(){
    int n;
    cout << "Ingrese el tamaño de la matriz cuadrada: ";
    cin >> n;

    int matriz[dim][dim];

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "La matriz ingresada es:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    if (esCuadradoMagico(matriz, n)) {
        cout << "La matriz es un cuadrado mágico." << endl;
    } else {
        cout << "La matriz no es un cuadrado mágico." << endl;
    }

    return 0;
}

bool esCuadradoMagico(int matriz[dim][dim], int n){
    int sumaFila = 0;
    
    for (int j = 0; j < n; j++) {
        sumaFila += matriz[0][j];
    }

    for (int i = 0; i < n; i++) {
        int sumaFilaActual = 0;
        for (int j = 0; j < n; j++) {
            sumaFilaActual += matriz[i][j];
        }
        if (sumaFilaActual != sumaFila) {
            return false;
        }
    }
    for (int j = 0; j < n; j++) {
        int sumaColumna = 0;
        for (int i = 0; i < n; i++) {
            sumaColumna += matriz[i][j];
        }
        if (sumaColumna != sumaFila) {
            return false;
        }
    }
    
    int sumaDiagonalPrincipal = 0;
    for (int i = 0; i < n; i++) {
        sumaDiagonalPrincipal += matriz[i][i];
    }
    if (sumaDiagonalPrincipal != sumaFila) {
        return false;
    }

    int sumaDiagonalSecundaria = 0;
    for (int i = 0; i < n; i++) {
        sumaDiagonalSecundaria += matriz[i][n - 1 - i];
    }
    if (sumaDiagonalSecundaria != sumaFila) {
        return false;
    }

    return true;
}
