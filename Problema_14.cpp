/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

const int filcol = 5;

void llenarMatriz(int *matriz, int filcol);

void imprimirMatriz(int *matriz, int filcol);

void rotarMatriz90Grados(int *matriz, int filcol);

int main() {
    int matriz[filcol][filcol];
    int *ptrMatriz = &matriz[0][0];

    llenarMatriz(ptrMatriz, filcol);

    cout << "Matriz original:" << endl;
    imprimirMatriz(ptrMatriz, filcol);
    cout << endl;

    cout << "Matriz rotada 90 grados:" << endl;
    rotarMatriz90Grados(ptrMatriz, filcol);
    imprimirMatriz(ptrMatriz, filcol);
    cout << endl;

    cout << "Matriz rotada 180 grados:" << endl;
    rotarMatriz90Grados(ptrMatriz, filcol);
    imprimirMatriz(ptrMatriz, filcol);
    cout << endl;
    
    cout << "Matriz rotada 270 grados:" << endl;
    rotarMatriz90Grados(ptrMatriz, filcol);
    imprimirMatriz(ptrMatriz, filcol);

    return 0;
}

void llenarMatriz(int *matriz, int filcol){
    int contador = 1;
    for (int i = 0; i < filcol; i++) {
        for (int j = 0; j < filcol; j++) {
            *(matriz + i * filcol + j) = contador++;
        }
    }
}

void imprimirMatriz(int *matriz, int filcol){
    for (int i = 0; i < filcol; i++) {
        for (int j = 0; j < filcol; j++) {
            cout << *(matriz + i * filcol + j) << " ";
        }
        cout << endl;
    }
}

void rotarMatriz90Grados(int *matriz, int filcol){
    int temp[filcol][filcol];
    int *ptrTemp = &temp[0][0];
    
    for (int i = 0; i < filcol; i++) {
        for (int j = 0; j < filcol; j++) {
            *(ptrTemp + j * filcol + i) = *(matriz + i * filcol + j);
        }
    }
    
    for (int i = 0; i < filcol; i++) {
        for (int j = 0; j < filcol; j++) {
            *(matriz + i * filcol + j) = *(ptrTemp + i * filcol + (filcol - 1 - j));
        }
    }
}
